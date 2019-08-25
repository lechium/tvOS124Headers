/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BKSTerminationAssertionObserver.h>

@protocol FBApplicationTerminationAssertionServiceDelegate;
@class NSString;

@interface FBApplicationTerminationAssertionService : NSObject <BKSTerminationAssertionObserver> {

	id<FBApplicationTerminationAssertionServiceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBApplicationTerminationAssertionServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)_reasonForEfficacy:(unsigned long long)arg1 ;
-(unsigned long long)_efficacyForReason:(id)arg1 ;
-(void)_notifyDelegateOfRelinquishForBundleID:(id)arg1 ;
-(void)_notifyDelegateOfAcquisitionForBundleID:(id)arg1 efficacy:(unsigned long long)arg2 ;
-(void)noteTerminationAssertionEfficacyChangedTo:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 ;
-(id)terminationAssertionsForBundleID:(id)arg1 ;
-(id)terminationAssertionsForBundleID:(id)arg1 withReason:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<FBApplicationTerminationAssertionServiceDelegate>)arg1 ;
-(id<FBApplicationTerminationAssertionServiceDelegate>)delegate;
@end

