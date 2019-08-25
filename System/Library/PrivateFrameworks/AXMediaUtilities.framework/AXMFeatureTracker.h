/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@class AXMVisionFeature, NSString;

@interface AXMFeatureTracker : NSObject {

	AXMVisionFeature* _backingFeature;
	CGRect _currentLocation;

}

@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) CGRect currentLocation;                 //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,readonly) NSString * value; 
@property (nonatomic,readonly) unsigned long long faceId; 
+(id)trackerWithFeature:(id)arg1 ;
-(id)initWithFeature:(id)arg1 ;
-(CGRect)currentLocation;
-(unsigned long long)faceId;
-(id)description;
-(unsigned long long)type;
-(NSString *)value;
-(void)update:(id)arg1 ;
@end

