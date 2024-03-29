/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGTitleGenerator.h>
#import <libobjc.A.dylib/PGSpecBasedTitleGeneratorDelegate.h>

@class NSString;

@interface PGThrowbackThursdayMemoryTitleGenerator : PGTitleGenerator <PGSpecBasedTitleGeneratorDelegate> {

	long long _numberOfYearsAgo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(id)titleGenerator:(id)arg1 inputForArgument:(id)arg2 ;
-(id)initWithMomentNode:(id)arg1 numberOfYearsAgo:(long long)arg2 ;
@end

