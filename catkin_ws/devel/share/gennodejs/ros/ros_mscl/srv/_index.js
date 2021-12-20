
"use strict";

let GetAccelBiasModel = require('./GetAccelBiasModel.js')
let GetGravityAdaptiveVals = require('./GetGravityAdaptiveVals.js')
let SetSensor2VehicleRotation = require('./SetSensor2VehicleRotation.js')
let SetZeroAngleUpdateThreshold = require('./SetZeroAngleUpdateThreshold.js')
let GetGyroBiasModel = require('./GetGyroBiasModel.js')
let GetComplementaryFilter = require('./GetComplementaryFilter.js')
let SetMagAdaptiveVals = require('./SetMagAdaptiveVals.js')
let SetEstimationControlFlags = require('./SetEstimationControlFlags.js')
let SetHeadingSource = require('./SetHeadingSource.js')
let GetEstimationControlFlags = require('./GetEstimationControlFlags.js')
let GetMagNoise = require('./GetMagNoise.js')
let GetAccelAdaptiveVals = require('./GetAccelAdaptiveVals.js')
let SetGyroBias = require('./SetGyroBias.js')
let SetGyroBiasModel = require('./SetGyroBiasModel.js')
let GetMagDipAdaptiveVals = require('./GetMagDipAdaptiveVals.js')
let SetGravityAdaptiveVals = require('./SetGravityAdaptiveVals.js')
let SetAccelNoise = require('./SetAccelNoise.js')
let GetAccelNoise = require('./GetAccelNoise.js')
let GetHeadingSource = require('./GetHeadingSource.js')
let GetAccelBias = require('./GetAccelBias.js')
let GetConingScullingComp = require('./GetConingScullingComp.js')
let InitFilterHeading = require('./InitFilterHeading.js')
let SetTareOrientation = require('./SetTareOrientation.js')
let GetGyroBias = require('./GetGyroBias.js')
let SetReferencePosition = require('./SetReferencePosition.js')
let GetReferencePosition = require('./GetReferencePosition.js')
let SetGyroNoise = require('./SetGyroNoise.js')
let SetRelativePositionReference = require('./SetRelativePositionReference.js')
let InitFilterEuler = require('./InitFilterEuler.js')
let SetConingScullingComp = require('./SetConingScullingComp.js')
let GetTareOrientation = require('./GetTareOrientation.js')
let GetDynamicsMode = require('./GetDynamicsMode.js')
let GetRelativePositionReference = require('./GetRelativePositionReference.js')
let SetComplementaryFilter = require('./SetComplementaryFilter.js')
let SetHardIronValues = require('./SetHardIronValues.js')
let GetSoftIronMatrix = require('./GetSoftIronMatrix.js')
let DeviceSettings = require('./DeviceSettings.js')
let GetSensor2VehicleOffset = require('./GetSensor2VehicleOffset.js')
let GetZeroAngleUpdateThreshold = require('./GetZeroAngleUpdateThreshold.js')
let GetZeroVelocityUpdateThreshold = require('./GetZeroVelocityUpdateThreshold.js')
let SetSensor2VehicleOffset = require('./SetSensor2VehicleOffset.js')
let GetGyroNoise = require('./GetGyroNoise.js')
let GetMagAdaptiveVals = require('./GetMagAdaptiveVals.js')
let SetAccelBias = require('./SetAccelBias.js')
let GetSensor2VehicleTransformation = require('./GetSensor2VehicleTransformation.js')
let ExternalHeadingUpdate = require('./ExternalHeadingUpdate.js')
let SetZeroVelocityUpdateThreshold = require('./SetZeroVelocityUpdateThreshold.js')
let SetDynamicsMode = require('./SetDynamicsMode.js')
let GetSensor2VehicleRotation = require('./GetSensor2VehicleRotation.js')
let SetMagNoise = require('./SetMagNoise.js')
let SetAccelAdaptiveVals = require('./SetAccelAdaptiveVals.js')
let GetHardIronValues = require('./GetHardIronValues.js')
let SetMagDipAdaptiveVals = require('./SetMagDipAdaptiveVals.js')
let SetAccelBiasModel = require('./SetAccelBiasModel.js')
let SetSoftIronMatrix = require('./SetSoftIronMatrix.js')

module.exports = {
  GetAccelBiasModel: GetAccelBiasModel,
  GetGravityAdaptiveVals: GetGravityAdaptiveVals,
  SetSensor2VehicleRotation: SetSensor2VehicleRotation,
  SetZeroAngleUpdateThreshold: SetZeroAngleUpdateThreshold,
  GetGyroBiasModel: GetGyroBiasModel,
  GetComplementaryFilter: GetComplementaryFilter,
  SetMagAdaptiveVals: SetMagAdaptiveVals,
  SetEstimationControlFlags: SetEstimationControlFlags,
  SetHeadingSource: SetHeadingSource,
  GetEstimationControlFlags: GetEstimationControlFlags,
  GetMagNoise: GetMagNoise,
  GetAccelAdaptiveVals: GetAccelAdaptiveVals,
  SetGyroBias: SetGyroBias,
  SetGyroBiasModel: SetGyroBiasModel,
  GetMagDipAdaptiveVals: GetMagDipAdaptiveVals,
  SetGravityAdaptiveVals: SetGravityAdaptiveVals,
  SetAccelNoise: SetAccelNoise,
  GetAccelNoise: GetAccelNoise,
  GetHeadingSource: GetHeadingSource,
  GetAccelBias: GetAccelBias,
  GetConingScullingComp: GetConingScullingComp,
  InitFilterHeading: InitFilterHeading,
  SetTareOrientation: SetTareOrientation,
  GetGyroBias: GetGyroBias,
  SetReferencePosition: SetReferencePosition,
  GetReferencePosition: GetReferencePosition,
  SetGyroNoise: SetGyroNoise,
  SetRelativePositionReference: SetRelativePositionReference,
  InitFilterEuler: InitFilterEuler,
  SetConingScullingComp: SetConingScullingComp,
  GetTareOrientation: GetTareOrientation,
  GetDynamicsMode: GetDynamicsMode,
  GetRelativePositionReference: GetRelativePositionReference,
  SetComplementaryFilter: SetComplementaryFilter,
  SetHardIronValues: SetHardIronValues,
  GetSoftIronMatrix: GetSoftIronMatrix,
  DeviceSettings: DeviceSettings,
  GetSensor2VehicleOffset: GetSensor2VehicleOffset,
  GetZeroAngleUpdateThreshold: GetZeroAngleUpdateThreshold,
  GetZeroVelocityUpdateThreshold: GetZeroVelocityUpdateThreshold,
  SetSensor2VehicleOffset: SetSensor2VehicleOffset,
  GetGyroNoise: GetGyroNoise,
  GetMagAdaptiveVals: GetMagAdaptiveVals,
  SetAccelBias: SetAccelBias,
  GetSensor2VehicleTransformation: GetSensor2VehicleTransformation,
  ExternalHeadingUpdate: ExternalHeadingUpdate,
  SetZeroVelocityUpdateThreshold: SetZeroVelocityUpdateThreshold,
  SetDynamicsMode: SetDynamicsMode,
  GetSensor2VehicleRotation: GetSensor2VehicleRotation,
  SetMagNoise: SetMagNoise,
  SetAccelAdaptiveVals: SetAccelAdaptiveVals,
  GetHardIronValues: GetHardIronValues,
  SetMagDipAdaptiveVals: SetMagDipAdaptiveVals,
  SetAccelBiasModel: SetAccelBiasModel,
  SetSoftIronMatrix: SetSoftIronMatrix,
};
