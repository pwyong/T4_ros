
(cl:in-package :asdf)

(defsystem "sbus_serial-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :std_msgs-msg
)
  :components ((:file "_package")
    (:file "Sbus" :depends-on ("_package_Sbus"))
    (:file "_package_Sbus" :depends-on ("_package"))
  ))