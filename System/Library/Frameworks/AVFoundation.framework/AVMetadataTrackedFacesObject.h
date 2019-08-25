/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVMetadataTrackedFacesObjectInternal, NSDictionary;

@interface AVMetadataTrackedFacesObject : AVMetadataObject <NSCopying> {

	AVMetadataTrackedFacesObjectInternal* _trackedFacesObjectInternal;

}

@property (readonly) NSDictionary * payload; 
+(id)trackedFacesWithTime:(SCD_Struct_AV5)arg1 faceKitDictionary:(id)arg2 input:(id)arg3 ;
-(id)initWithTime:(SCD_Struct_AV5)arg1 faceKitDictionary:(id)arg2 input:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)payload;
@end

