/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/MNCommuteDestinationScore.h>

@interface MNCommuteDestinationMapsSuggestionsScore : MNCommuteDestinationScore
+(double)weight;
-(int)score;
-(void)updateScoreIfPossible;
-(BOOL)destinationInvalid;
-(id)descriptionExtras;
@end

