/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol HFDiffOperation <NSObject,NAEquatable>
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,copy,readonly) NSString * operationDescription; 
@required
-(NSString *)operationDescription;
-(unsigned long long)type;

@end

