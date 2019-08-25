/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDCameraProfile, NSMutableSet;

@interface HMDBulletinBoardCameraNotificationAssociation : HMFObject {

	HMDCameraProfile* _cameraProfile;
	NSMutableSet* _notificationGeneratingServicesWithCamera;
	NSMutableSet* _notificationGeneratingServicesInRoom;

}

@property (nonatomic,readonly) HMDCameraProfile * cameraProfile;                                     //@synthesize cameraProfile=_cameraProfile - In the implementation block
@property (nonatomic,readonly) NSMutableSet * notificationGeneratingServicesWithCamera;              //@synthesize notificationGeneratingServicesWithCamera=_notificationGeneratingServicesWithCamera - In the implementation block
@property (nonatomic,readonly) NSMutableSet * notificationGeneratingServicesInRoom;                  //@synthesize notificationGeneratingServicesInRoom=_notificationGeneratingServicesInRoom - In the implementation block
-(id)initWithCameraProfile:(id)arg1 ;
-(NSMutableSet *)notificationGeneratingServicesWithCamera;
-(NSMutableSet *)notificationGeneratingServicesInRoom;
-(HMDCameraProfile *)cameraProfile;
-(id)description;
@end
