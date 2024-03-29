/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSClue.h>

@interface CLSMeaningClue : CLSClue {

	id _relatedData;

}

@property (retain) id relatedData;              //@synthesize relatedData=_relatedData - In the implementation block
+(id)clueWithValue:(id)arg1 forKey:(id)arg2 ;
+(id)clueWithValue:(id)arg1 forKey:(id)arg2 confidence:(double)arg3 relevance:(double)arg4 ;
-(BOOL)isEqualToClue:(id)arg1 ;
-(id)relatedData;
-(void)setRelatedData:(id)arg1 ;
-(id)init;
@end

