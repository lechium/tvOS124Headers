/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface AKURLRequestApprover : NSObject {

	NSArray* _whiteListedPaths;

}
-(BOOL)_matchInputAgainstPaths:(id)arg1 ;
-(id)initWithWhitelistedPaths:(id)arg1 ;
-(BOOL)shouldAllowRequest:(id)arg1 ;
@end

