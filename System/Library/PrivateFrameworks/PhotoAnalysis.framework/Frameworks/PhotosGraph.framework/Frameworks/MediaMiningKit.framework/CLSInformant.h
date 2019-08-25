/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CLSInformant : NSObject {

	NSString* _uuid;

}

@property (nonatomic,copy,readonly) NSString * uuid;              //@synthesize uuid=_uuid - In the implementation block
+(id)familyIdentifier;
+(id)supportedOutputClueKeys;
+(id)classIdentifier;
+(id)informantDependenciesIdentifiers;
+(id)identifier;
-(id)gatherCluesForInvestigation:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)init;
-(NSString *)uuid;
-(id)uniqueIdentifier;
@end
