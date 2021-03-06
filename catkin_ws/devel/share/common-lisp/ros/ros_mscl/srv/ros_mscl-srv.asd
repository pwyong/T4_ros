
(cl:in-package :asdf)

(defsystem "ros_mscl-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
)
  :components ((:file "_package")
    (:file "DeviceSettings" :depends-on ("_package_DeviceSettings"))
    (:file "_package_DeviceSettings" :depends-on ("_package"))
    (:file "ExternalHeadingUpdate" :depends-on ("_package_ExternalHeadingUpdate"))
    (:file "_package_ExternalHeadingUpdate" :depends-on ("_package"))
    (:file "GetAccelAdaptiveVals" :depends-on ("_package_GetAccelAdaptiveVals"))
    (:file "_package_GetAccelAdaptiveVals" :depends-on ("_package"))
    (:file "GetAccelBias" :depends-on ("_package_GetAccelBias"))
    (:file "_package_GetAccelBias" :depends-on ("_package"))
    (:file "GetAccelBiasModel" :depends-on ("_package_GetAccelBiasModel"))
    (:file "_package_GetAccelBiasModel" :depends-on ("_package"))
    (:file "GetAccelNoise" :depends-on ("_package_GetAccelNoise"))
    (:file "_package_GetAccelNoise" :depends-on ("_package"))
    (:file "GetComplementaryFilter" :depends-on ("_package_GetComplementaryFilter"))
    (:file "_package_GetComplementaryFilter" :depends-on ("_package"))
    (:file "GetConingScullingComp" :depends-on ("_package_GetConingScullingComp"))
    (:file "_package_GetConingScullingComp" :depends-on ("_package"))
    (:file "GetDynamicsMode" :depends-on ("_package_GetDynamicsMode"))
    (:file "_package_GetDynamicsMode" :depends-on ("_package"))
    (:file "GetEstimationControlFlags" :depends-on ("_package_GetEstimationControlFlags"))
    (:file "_package_GetEstimationControlFlags" :depends-on ("_package"))
    (:file "GetGravityAdaptiveVals" :depends-on ("_package_GetGravityAdaptiveVals"))
    (:file "_package_GetGravityAdaptiveVals" :depends-on ("_package"))
    (:file "GetGyroBias" :depends-on ("_package_GetGyroBias"))
    (:file "_package_GetGyroBias" :depends-on ("_package"))
    (:file "GetGyroBiasModel" :depends-on ("_package_GetGyroBiasModel"))
    (:file "_package_GetGyroBiasModel" :depends-on ("_package"))
    (:file "GetGyroNoise" :depends-on ("_package_GetGyroNoise"))
    (:file "_package_GetGyroNoise" :depends-on ("_package"))
    (:file "GetHardIronValues" :depends-on ("_package_GetHardIronValues"))
    (:file "_package_GetHardIronValues" :depends-on ("_package"))
    (:file "GetHeadingSource" :depends-on ("_package_GetHeadingSource"))
    (:file "_package_GetHeadingSource" :depends-on ("_package"))
    (:file "GetMagAdaptiveVals" :depends-on ("_package_GetMagAdaptiveVals"))
    (:file "_package_GetMagAdaptiveVals" :depends-on ("_package"))
    (:file "GetMagDipAdaptiveVals" :depends-on ("_package_GetMagDipAdaptiveVals"))
    (:file "_package_GetMagDipAdaptiveVals" :depends-on ("_package"))
    (:file "GetMagNoise" :depends-on ("_package_GetMagNoise"))
    (:file "_package_GetMagNoise" :depends-on ("_package"))
    (:file "GetReferencePosition" :depends-on ("_package_GetReferencePosition"))
    (:file "_package_GetReferencePosition" :depends-on ("_package"))
    (:file "GetRelativePositionReference" :depends-on ("_package_GetRelativePositionReference"))
    (:file "_package_GetRelativePositionReference" :depends-on ("_package"))
    (:file "GetSensor2VehicleOffset" :depends-on ("_package_GetSensor2VehicleOffset"))
    (:file "_package_GetSensor2VehicleOffset" :depends-on ("_package"))
    (:file "GetSensor2VehicleRotation" :depends-on ("_package_GetSensor2VehicleRotation"))
    (:file "_package_GetSensor2VehicleRotation" :depends-on ("_package"))
    (:file "GetSensor2VehicleTransformation" :depends-on ("_package_GetSensor2VehicleTransformation"))
    (:file "_package_GetSensor2VehicleTransformation" :depends-on ("_package"))
    (:file "GetSoftIronMatrix" :depends-on ("_package_GetSoftIronMatrix"))
    (:file "_package_GetSoftIronMatrix" :depends-on ("_package"))
    (:file "GetTareOrientation" :depends-on ("_package_GetTareOrientation"))
    (:file "_package_GetTareOrientation" :depends-on ("_package"))
    (:file "GetZeroAngleUpdateThreshold" :depends-on ("_package_GetZeroAngleUpdateThreshold"))
    (:file "_package_GetZeroAngleUpdateThreshold" :depends-on ("_package"))
    (:file "GetZeroVelocityUpdateThreshold" :depends-on ("_package_GetZeroVelocityUpdateThreshold"))
    (:file "_package_GetZeroVelocityUpdateThreshold" :depends-on ("_package"))
    (:file "InitFilterEuler" :depends-on ("_package_InitFilterEuler"))
    (:file "_package_InitFilterEuler" :depends-on ("_package"))
    (:file "InitFilterHeading" :depends-on ("_package_InitFilterHeading"))
    (:file "_package_InitFilterHeading" :depends-on ("_package"))
    (:file "SetAccelAdaptiveVals" :depends-on ("_package_SetAccelAdaptiveVals"))
    (:file "_package_SetAccelAdaptiveVals" :depends-on ("_package"))
    (:file "SetAccelBias" :depends-on ("_package_SetAccelBias"))
    (:file "_package_SetAccelBias" :depends-on ("_package"))
    (:file "SetAccelBiasModel" :depends-on ("_package_SetAccelBiasModel"))
    (:file "_package_SetAccelBiasModel" :depends-on ("_package"))
    (:file "SetAccelNoise" :depends-on ("_package_SetAccelNoise"))
    (:file "_package_SetAccelNoise" :depends-on ("_package"))
    (:file "SetComplementaryFilter" :depends-on ("_package_SetComplementaryFilter"))
    (:file "_package_SetComplementaryFilter" :depends-on ("_package"))
    (:file "SetConingScullingComp" :depends-on ("_package_SetConingScullingComp"))
    (:file "_package_SetConingScullingComp" :depends-on ("_package"))
    (:file "SetDynamicsMode" :depends-on ("_package_SetDynamicsMode"))
    (:file "_package_SetDynamicsMode" :depends-on ("_package"))
    (:file "SetEstimationControlFlags" :depends-on ("_package_SetEstimationControlFlags"))
    (:file "_package_SetEstimationControlFlags" :depends-on ("_package"))
    (:file "SetGravityAdaptiveVals" :depends-on ("_package_SetGravityAdaptiveVals"))
    (:file "_package_SetGravityAdaptiveVals" :depends-on ("_package"))
    (:file "SetGyroBias" :depends-on ("_package_SetGyroBias"))
    (:file "_package_SetGyroBias" :depends-on ("_package"))
    (:file "SetGyroBiasModel" :depends-on ("_package_SetGyroBiasModel"))
    (:file "_package_SetGyroBiasModel" :depends-on ("_package"))
    (:file "SetGyroNoise" :depends-on ("_package_SetGyroNoise"))
    (:file "_package_SetGyroNoise" :depends-on ("_package"))
    (:file "SetHardIronValues" :depends-on ("_package_SetHardIronValues"))
    (:file "_package_SetHardIronValues" :depends-on ("_package"))
    (:file "SetHeadingSource" :depends-on ("_package_SetHeadingSource"))
    (:file "_package_SetHeadingSource" :depends-on ("_package"))
    (:file "SetMagAdaptiveVals" :depends-on ("_package_SetMagAdaptiveVals"))
    (:file "_package_SetMagAdaptiveVals" :depends-on ("_package"))
    (:file "SetMagDipAdaptiveVals" :depends-on ("_package_SetMagDipAdaptiveVals"))
    (:file "_package_SetMagDipAdaptiveVals" :depends-on ("_package"))
    (:file "SetMagNoise" :depends-on ("_package_SetMagNoise"))
    (:file "_package_SetMagNoise" :depends-on ("_package"))
    (:file "SetReferencePosition" :depends-on ("_package_SetReferencePosition"))
    (:file "_package_SetReferencePosition" :depends-on ("_package"))
    (:file "SetRelativePositionReference" :depends-on ("_package_SetRelativePositionReference"))
    (:file "_package_SetRelativePositionReference" :depends-on ("_package"))
    (:file "SetSensor2VehicleOffset" :depends-on ("_package_SetSensor2VehicleOffset"))
    (:file "_package_SetSensor2VehicleOffset" :depends-on ("_package"))
    (:file "SetSensor2VehicleRotation" :depends-on ("_package_SetSensor2VehicleRotation"))
    (:file "_package_SetSensor2VehicleRotation" :depends-on ("_package"))
    (:file "SetSoftIronMatrix" :depends-on ("_package_SetSoftIronMatrix"))
    (:file "_package_SetSoftIronMatrix" :depends-on ("_package"))
    (:file "SetTareOrientation" :depends-on ("_package_SetTareOrientation"))
    (:file "_package_SetTareOrientation" :depends-on ("_package"))
    (:file "SetZeroAngleUpdateThreshold" :depends-on ("_package_SetZeroAngleUpdateThreshold"))
    (:file "_package_SetZeroAngleUpdateThreshold" :depends-on ("_package"))
    (:file "SetZeroVelocityUpdateThreshold" :depends-on ("_package_SetZeroVelocityUpdateThreshold"))
    (:file "_package_SetZeroVelocityUpdateThreshold" :depends-on ("_package"))
  ))