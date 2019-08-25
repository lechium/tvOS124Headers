#import <HomeKit/_HMCameraSettingsControl.h>
#import <HomeKit/HMLocationEvent.h>
#import <HomeKit/HMMutableLocationEvent.h>
#import <HomeKit/HMCameraStreamControl.h>
#import <HomeKit/HMAccessorySettingConstraint.h>
#import <HomeKit/HMCharacteristic.h>
#import <HomeKit/HMUserListRemoteViewController.h>
#import <HomeKit/HMCameraControl.h>
#import <HomeKit/HMPredicateUtilities.h>
#import <HomeKit/HMHomeAccessControl.h>
#import <HomeKit/HMXPCClientConnectionProxy.h>
#import <HomeKit/HMXPCClient.h>
#import <HomeKit/_HMCameraStream.h>
#import <HomeKit/HMSymptom.h>
#import <HomeKit/HMDevice.h>
#import <HomeKit/HMCharacteristicEvent.h>
#import <HomeKit/HMMutableCharacteristicEvent.h>
#import <HomeKit/HMAccessoryCategory.h>
#import <HomeKit/HMAccessorySetupCompletedInfo.h>
#import <HomeKit/HMNumberRange.h>
#import <HomeKit/HMCharacteristicThresholdRangeEvent.h>
#import <HomeKit/HMMutableCharacteristicThresholdRangeEvent.h>
#import <HomeKit/HMCameraSnapshot.h>
#import <HomeKit/_HMCameraSnapshotControl.h>
#import <HomeKit/HMDurationEvent.h>
#import <HomeKit/HMMutableDurationEvent.h>
#import <HomeKit/HMResidentDevice.h>
#import <HomeKit/_HMLocationHandler.h>
#import <HomeKit/HMCameraStreamAudioPreferences.h>
#import <HomeKit/HMCameraStreamVideoPreferences.h>
#import <HomeKit/HMCameraStreamPreferences.h>
#import <HomeKit/HMDelegateCaller.h>
#import <HomeKit/HMTimeEvent.h>
#import <HomeKit/HMDeviceSetupOperationHandler.h>
#import <HomeKit/HMProvisionAnisetteDataRequest.h>
#import <HomeKit/HMProvisionAnisetteDataResponse.h>
#import <HomeKit/HMSyncAnisetteDataRequest.h>
#import <HomeKit/HMSyncAnisetteDataResponse.h>
#import <HomeKit/HMEraseAnisetteDataRequest.h>
#import <HomeKit/HMEraseAnisetteDataResponse.h>
#import <HomeKit/HMFetchAnisetteDataRequest.h>
#import <HomeKit/HMFetchAnisetteDataResponse.h>
#import <HomeKit/HMLegacyAnisetteDataRequest.h>
#import <HomeKit/HMLegacyAnisetteDataResponse.h>
#import <HomeKit/HMTrigger.h>
#import <HomeKit/HMSetupAccessoryDescription.h>
#import <HomeKit/HMObjectMergeOperations.h>
#import <HomeKit/HMObjectMergeCollection.h>
#import <HomeKit/HMCameraAudioCodec.h>
#import <HomeKit/HMSetupRemoteViewController.h>
#import <HomeKit/HMBulletinBoardNotificationServiceGroup.h>
#import <HomeKit/_HMAudioControl.h>
#import <HomeKit/HMAudioControl.h>
#import <HomeKit/HMApplicationData.h>
#import <HomeKit/HMCharacteristicMetadata.h>
#import <HomeKit/HMCharacteristicRequest.h>
#import <HomeKit/HMCharacteristicReadRequest.h>
#import <HomeKit/HMCharacteristicWriteRequest.h>
#import <HomeKit/HMCharacteristicResponse.h>
#import <HomeKit/HMCharacteristicBatchRequest.h>
#import <HomeKit/HMDeviceSetupResponseMessage.h>
#import <HomeKit/HMCameraView.h>
#import <HomeKit/HMCameraStream.h>
#import <HomeKit/HMEvent.h>
#import <HomeKit/HMSoftwareUpdateController.h>
#import <HomeKit/HMEventTrigger.h>
#import <HomeKit/HMCameraSettingsControl.h>
#import <HomeKit/HMSoftwareUpdate.h>
#import <HomeKit/HMSetupAccessoryBrowsingRequest.h>
#import <HomeKit/_HMCameraAudioControl.h>
#import <HomeKit/HMMediaSystem.h>
#import <HomeKit/HMSoftwareUpdateManager.h>
#import <HomeKit/HMCharacteristicWriteAction.h>
#import <HomeKit/_HMCameraSource.h>
#import <HomeKit/HMSetupViewController.h>
#import <HomeKit/HMPBMetadataCategory.h>
#import <HomeKit/HMRoom.h>
#import <HomeKit/HMRemoteLoginAnisetteDataProvider.h>
#import <HomeKit/_HMCameraSnapshot.h>
#import <HomeKit/HMBulletinObjectTuple.h>
#import <HomeKit/HMCameraVideoResolution.h>
#import <HomeKit/HMSymptomsHandler.h>
#import <HomeKit/HMAddUserViewController.h>
#import <HomeKit/HMServiceGroup.h>
#import <HomeKit/HMTimerTrigger.h>
#import <HomeKit/_HMCameraProfile.h>
#import <HomeKit/HMAccessoryInvitation.h>
#import <HomeKit/HMSignificantTimeEvent.h>
#import <HomeKit/HMMutableSignificantTimeEvent.h>
#import <HomeKit/HMCameraProfile.h>
#import <HomeKit/HMCalendarEvent.h>
#import <HomeKit/HMMutableCalendarEvent.h>
#import <HomeKit/HMAsset.h>
#import <HomeKit/HMDeviceSetupOperation.h>
#import <HomeKit/HMUserInviteInformation.h>
#import <HomeKit/HMHome.h>
#import <HomeKit/HMAccessorySettings.h>
#import <HomeKit/_HMCameraControl.h>
#import <HomeKit/HMHomeManager.h>
#import <HomeKit/HMCameraSnapshotControl.h>
#import <HomeKit/HMSoftwareUpdateDocumentationMetadata.h>
#import <HomeKit/HMAccessoryProfile.h>
#import <HomeKit/HMHAPMetadataCharacteristic.h>
#import <HomeKit/HMHAPMetadataService.h>
#import <HomeKit/HMHAPMetadataCategory.h>
#import <HomeKit/HMHAPMetadata.h>
#import <HomeKit/HMAccessoryAdvertisementInfo.h>
#import <HomeKit/HMAccessory.h>
#import <HomeKit/_HMAccessorySettingGroup.h>
#import <HomeKit/HMAccessorySettingGroup.h>
#import <HomeKit/HMCameraAudioControl.h>
#import <HomeKit/HMPresenceEventActivation.h>
#import <HomeKit/HMRemoteLoginMessage.h>
#import <HomeKit/HMAddUserRemoteViewController.h>
#import <HomeKit/HMAccessorySetupPayload.h>
#import <HomeKit/HMAccessoryBrowser.h>
#import <HomeKit/_HMAccessoryProfile.h>
#import <HomeKit/HMSymptomFixSession.h>
#import <HomeKit/HMClientConnection.h>
#import <HomeKit/HMRemoteLoginHandler.h>
#import <HomeKit/HMPendingRequests.h>
#import <HomeKit/HMZone.h>
#import <HomeKit/HMUser.h>
#import <HomeKit/HMCameraSource.h>
#import <HomeKit/HMPBMetadataCharacteristic.h>
#import <HomeKit/_HMContext.h>
#import <HomeKit/HMAction.h>
#import <HomeKit/HMSoftwareUpdateDocumentation.h>
#import <HomeKit/HMPresenceEvent.h>
#import <HomeKit/HMMutablePresenceEvent.h>
#import <HomeKit/HMMediaSystemRole.h>
#import <HomeKit/HMUserPresenceCompute.h>
#import <HomeKit/HMHTMLDocument.h>
#import <HomeKit/HMAccessControl.h>
#import <HomeKit/HMHomeInvitationData.h>
#import <HomeKit/HMOutgoingHomeInvitationData.h>
#import <HomeKit/HMIncomingHomeInvitationData.h>
#import <HomeKit/HMMediaSystemBuilder.h>
#import <HomeKit/HMSetupAccessoryPayload.h>
#import <HomeKit/HMMutableArray.h>
#import <HomeKit/HMDeviceSetupSession.h>
#import <HomeKit/HMAssistantAccessControl.h>
#import <HomeKit/HMMutableAssistantAccessControl.h>
#import <HomeKit/HMActionSet.h>
#import <HomeKit/HMPBMetadata.h>
#import <HomeKit/_HMTelevisionProfile.h>
#import <HomeKit/HMTelevisionProfile.h>
#import <HomeKit/_HMMediaProfile.h>
#import <HomeKit/HMMediaProfile.h>
#import <HomeKit/_HMAccessorySetting.h>
#import <HomeKit/HMAccessorySetting.h>
#import <HomeKit/HMAccessoryDataSetting.h>
#import <HomeKit/HMAccessoryNumberSetting.h>
#import <HomeKit/HMAccessoryStringSetting.h>
#import <HomeKit/HMAccessorySelectionSettingItem.h>
#import <HomeKit/HMAccessorySelectionSetting.h>
#import <HomeKit/HMAccessoryCollectionSettingItem.h>
#import <HomeKit/_HMAccessoryCollectionSettingItemClassManager.h>
#import <HomeKit/HMAccessoryCollectionSetting.h>
#import <HomeKit/HMHomeInvitation.h>
#import <HomeKit/HMOutgoingHomeInvitation.h>
#import <HomeKit/HMIncomingHomeInvitation.h>
#import <HomeKit/HMService.h>
#import <HomeKit/HMUserPresenceAuthorization.h>
#import <HomeKit/HMLocalization.h>
#import <HomeKit/HMBulletinBoardNotification.h>
#import <HomeKit/HMMediaSystemComponent.h>
#import <HomeKit/HMMutableMediaSystemComponent.h>
#import <HomeKit/_HMMediaSession.h>
#import <HomeKit/HMMediaSession.h>
#import <HomeKit/HMPBMetadataService.h>
#import <HomeKit/HMUserListViewController.h>
#import <HomeKit/HMHomeManagerConfiguration.h>
#import <HomeKit/HMDeviceSetupRequestMessage.h>
#import <HomeKit/HMPBEncodeOption.h>
#import <HomeKit/HMDIdentifierSaltStore.h>
#import <HomeKit/_HMCameraStreamControl.h>
