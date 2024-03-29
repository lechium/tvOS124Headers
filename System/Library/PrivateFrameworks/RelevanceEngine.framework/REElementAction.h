/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol REElementActionDelegate;
@interface REElementAction : NSObject <NSCopying, NSCoding> {

	id<REElementActionDelegate> _delegate;
	BOOL _forceExecution;

}

@property (assign,nonatomic) BOOL forceExecution;                                      //@synthesize forceExecution=_forceExecution - In the implementation block
@property (assign,nonatomic,__weak) id<REElementActionDelegate> delegate; 
-(void)setForceExecution:(BOOL)arg1 ;
-(void)_performWithContext:(id)arg1 ;
-(void)_didFinish:(BOOL)arg1 ;
-(BOOL)forceExecution;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<REElementActionDelegate>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<REElementActionDelegate>)delegate;
@end

