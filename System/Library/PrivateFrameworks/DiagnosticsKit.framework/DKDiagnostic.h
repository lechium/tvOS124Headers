/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class DKMutableDiagnosticResult;


@protocol DKDiagnostic <NSObject>
@property (nonatomic,retain) DKMutableDiagnosticResult * result; 
@property (assign,getter=isFinished,nonatomic) BOOL finished; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@optional
-(void)setupWithInputs:(id)arg1 responder:(id)arg2;
-(void)teardown;
-(void)cancel;

@required
-(void)setResult:(id)arg1;
-(void)setFinished:(BOOL)arg1;
-(void)start;
-(BOOL)isCancelled;
-(DKMutableDiagnosticResult *)result;
-(BOOL)isFinished;

@end

