;; Auto-generated. Do not edit!


(when (boundp 'sbus_serial::Sbus)
  (if (not (find-package "SBUS_SERIAL"))
    (make-package "SBUS_SERIAL"))
  (shadow 'Sbus (find-package "SBUS_SERIAL")))
(unless (find-package "SBUS_SERIAL::SBUS")
  (make-package "SBUS_SERIAL::SBUS"))

(in-package "ROS")
;;//! \htmlinclude Sbus.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass sbus_serial::Sbus
  :super ros::object
  :slots (_header _rawChannels _mappedChannels _failsafe _frame_lost ))

(defmethod sbus_serial::Sbus
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:rawChannels __rawChannels) (make-array 16 :initial-element 0 :element-type :integer))
    ((:mappedChannels __mappedChannels) (make-array 16 :initial-element 0 :element-type :integer))
    ((:failsafe __failsafe) nil)
    ((:frame_lost __frame_lost) nil)
    )
   (send-super :init)
   (setq _header __header)
   (setq _rawChannels __rawChannels)
   (setq _mappedChannels __mappedChannels)
   (setq _failsafe __failsafe)
   (setq _frame_lost __frame_lost)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:rawChannels
   (&optional __rawChannels)
   (if __rawChannels (setq _rawChannels __rawChannels)) _rawChannels)
  (:mappedChannels
   (&optional __mappedChannels)
   (if __mappedChannels (setq _mappedChannels __mappedChannels)) _mappedChannels)
  (:failsafe
   (&optional (__failsafe :null))
   (if (not (eq __failsafe :null)) (setq _failsafe __failsafe)) _failsafe)
  (:frame_lost
   (&optional (__frame_lost :null))
   (if (not (eq __frame_lost :null)) (setq _frame_lost __frame_lost)) _frame_lost)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; int16[16] _rawChannels
    (* 2    16)
    ;; int16[16] _mappedChannels
    (* 2    16)
    ;; bool _failsafe
    1
    ;; bool _frame_lost
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; int16[16] _rawChannels
     (dotimes (i 16)
       (write-word (elt _rawChannels i) s)
       )
     ;; int16[16] _mappedChannels
     (dotimes (i 16)
       (write-word (elt _mappedChannels i) s)
       )
     ;; bool _failsafe
       (if _failsafe (write-byte -1 s) (write-byte 0 s))
     ;; bool _frame_lost
       (if _frame_lost (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; int16[16] _rawChannels
   (dotimes (i (length _rawChannels))
     (setf (elt _rawChannels i) (sys::peek buf ptr- :short)) (incf ptr- 2)
     )
   ;; int16[16] _mappedChannels
   (dotimes (i (length _mappedChannels))
     (setf (elt _mappedChannels i) (sys::peek buf ptr- :short)) (incf ptr- 2)
     )
   ;; bool _failsafe
     (setq _failsafe (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _frame_lost
     (setq _frame_lost (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get sbus_serial::Sbus :md5sum-) "1934f89478affea7b06c825c908555cc")
(setf (get sbus_serial::Sbus :datatype-) "sbus_serial/Sbus")
(setf (get sbus_serial::Sbus :definition-)
      "Header header
int16[16] rawChannels
int16[16] mappedChannels
bool failsafe
bool frame_lost

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

")



(provide :sbus_serial/Sbus "1934f89478affea7b06c825c908555cc")


