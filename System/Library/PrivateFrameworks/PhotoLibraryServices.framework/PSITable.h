/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSITableDelegate;
@interface PSITable : NSObject {

	BOOL _finalizzeWasCalled;
	id<PSITableDelegate> _delegate;

}

@property (__weak,readonly) id<PSITableDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)finalizze;
-(id)initWithDelegate:(id)arg1 searchable:(BOOL)arg2 writable:(BOOL)arg3 ;
-(void)dealloc;
-(id<PSITableDelegate>)delegate;
-(void)clear;
@end

