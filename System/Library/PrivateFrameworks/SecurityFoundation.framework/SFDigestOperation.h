/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSData;


@protocol SFDigestOperation <NSObject,NSCopying,NSSecureCoding>
@property (copy,readonly) NSData * hashValue; 
@required
+(long long)blockSize;
+(long long)outputSize;
+(id)digest:(id)arg1;
-(void)addData:(id)arg1;
-(NSData *)hashValue;

@end
