/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IDSCKRecordZoneID;

@interface IDSCKRecordZone : NSObject <NSSecureCoding, NSCopying> {

	IDSCKRecordZoneID* _zoneID;

}

@property (nonatomic,readonly) IDSCKRecordZoneID * zoneID;              //@synthesize zoneID=_zoneID - In the implementation block
+(Class)__class;
+(id)alloc;
-(IDSCKRecordZoneID *)zoneID;
@end

