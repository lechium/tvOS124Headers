/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagement/RMUniquedManagedObject.h>

@class NSString, NSData, NSSet, NSDate;

@interface RMDevice : RMUniquedManagedObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) BOOL isLocalDevice; 
@property (nonatomic,retain) NSData * capabilitiesPlist; 
@property (nonatomic,retain) NSData * deviceInfoPlist; 
@property (nonatomic,retain) NSSet * apps; 
@property (nonatomic,retain) NSDate * lastUsageEventDate; 
@property (nonatomic,retain) NSSet * userDevicePairs; 
+(id)createOrReturnDeviceWithIdentifier:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)computeUniqueIdentifier;
-(void)didChangeValueForKey:(id)arg1 ;
@end

