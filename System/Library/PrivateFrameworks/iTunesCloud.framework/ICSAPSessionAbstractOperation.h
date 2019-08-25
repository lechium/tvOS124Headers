/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICAsyncOperation.h>

@class ICSAPSession;

@interface ICSAPSessionAbstractOperation : ICAsyncOperation {

	ICSAPSession* _sapSession;

}

@property (nonatomic,retain) ICSAPSession * sapSession;              //@synthesize sapSession=_sapSession - In the implementation block
-(void)setSapSession:(ICSAPSession *)arg1 ;
-(void)executeWithSAPContext:(id)arg1 ;
-(void)finishWithSAPContextPreparationError:(id)arg1 ;
-(ICSAPSession *)sapSession;
-(void)finishWithError:(id)arg1 ;
-(void)execute;
@end

