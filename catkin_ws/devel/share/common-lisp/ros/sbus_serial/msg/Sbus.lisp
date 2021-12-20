; Auto-generated. Do not edit!


(cl:in-package sbus_serial-msg)


;//! \htmlinclude Sbus.msg.html

(cl:defclass <Sbus> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (rawChannels
    :reader rawChannels
    :initarg :rawChannels
    :type (cl:vector cl:fixnum)
   :initform (cl:make-array 16 :element-type 'cl:fixnum :initial-element 0))
   (mappedChannels
    :reader mappedChannels
    :initarg :mappedChannels
    :type (cl:vector cl:fixnum)
   :initform (cl:make-array 16 :element-type 'cl:fixnum :initial-element 0))
   (failsafe
    :reader failsafe
    :initarg :failsafe
    :type cl:boolean
    :initform cl:nil)
   (frame_lost
    :reader frame_lost
    :initarg :frame_lost
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass Sbus (<Sbus>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Sbus>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Sbus)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name sbus_serial-msg:<Sbus> is deprecated: use sbus_serial-msg:Sbus instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <Sbus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader sbus_serial-msg:header-val is deprecated.  Use sbus_serial-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'rawChannels-val :lambda-list '(m))
(cl:defmethod rawChannels-val ((m <Sbus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader sbus_serial-msg:rawChannels-val is deprecated.  Use sbus_serial-msg:rawChannels instead.")
  (rawChannels m))

(cl:ensure-generic-function 'mappedChannels-val :lambda-list '(m))
(cl:defmethod mappedChannels-val ((m <Sbus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader sbus_serial-msg:mappedChannels-val is deprecated.  Use sbus_serial-msg:mappedChannels instead.")
  (mappedChannels m))

(cl:ensure-generic-function 'failsafe-val :lambda-list '(m))
(cl:defmethod failsafe-val ((m <Sbus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader sbus_serial-msg:failsafe-val is deprecated.  Use sbus_serial-msg:failsafe instead.")
  (failsafe m))

(cl:ensure-generic-function 'frame_lost-val :lambda-list '(m))
(cl:defmethod frame_lost-val ((m <Sbus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader sbus_serial-msg:frame_lost-val is deprecated.  Use sbus_serial-msg:frame_lost instead.")
  (frame_lost m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Sbus>) ostream)
  "Serializes a message object of type '<Sbus>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let* ((signed ele) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    ))
   (cl:slot-value msg 'rawChannels))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let* ((signed ele) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    ))
   (cl:slot-value msg 'mappedChannels))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'failsafe) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'frame_lost) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Sbus>) istream)
  "Deserializes a message object of type '<Sbus>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (cl:setf (cl:slot-value msg 'rawChannels) (cl:make-array 16))
  (cl:let ((vals (cl:slot-value msg 'rawChannels)))
    (cl:dotimes (i 16)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:aref vals i) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))))
  (cl:setf (cl:slot-value msg 'mappedChannels) (cl:make-array 16))
  (cl:let ((vals (cl:slot-value msg 'mappedChannels)))
    (cl:dotimes (i 16)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:aref vals i) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))))
    (cl:setf (cl:slot-value msg 'failsafe) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'frame_lost) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Sbus>)))
  "Returns string type for a message object of type '<Sbus>"
  "sbus_serial/Sbus")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Sbus)))
  "Returns string type for a message object of type 'Sbus"
  "sbus_serial/Sbus")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Sbus>)))
  "Returns md5sum for a message object of type '<Sbus>"
  "1934f89478affea7b06c825c908555cc")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Sbus)))
  "Returns md5sum for a message object of type 'Sbus"
  "1934f89478affea7b06c825c908555cc")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Sbus>)))
  "Returns full string definition for message of type '<Sbus>"
  (cl:format cl:nil "Header header~%int16[16] rawChannels~%int16[16] mappedChannels~%bool failsafe~%bool frame_lost~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Sbus)))
  "Returns full string definition for message of type 'Sbus"
  (cl:format cl:nil "Header header~%int16[16] rawChannels~%int16[16] mappedChannels~%bool failsafe~%bool frame_lost~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Sbus>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'rawChannels) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 2)))
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'mappedChannels) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 2)))
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Sbus>))
  "Converts a ROS message object to a list"
  (cl:list 'Sbus
    (cl:cons ':header (header msg))
    (cl:cons ':rawChannels (rawChannels msg))
    (cl:cons ':mappedChannels (mappedChannels msg))
    (cl:cons ':failsafe (failsafe msg))
    (cl:cons ':frame_lost (frame_lost msg))
))
