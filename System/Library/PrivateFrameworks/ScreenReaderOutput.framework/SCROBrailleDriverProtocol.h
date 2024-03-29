/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCROBrailleDriverProtocol <NSObject>
@optional
-(void)setBrailleDriverDelegate:(id)arg1;

@required
-(unsigned long long)interfaceVersion;
-(int)loadDriverWithIOElement:(id)arg1;
-(BOOL)unloadDriver;
-(BOOL)isDriverLoaded;
-(BOOL)isSleeping;
-(BOOL)supportsBlinkingCursor;
-(BOOL)isInputEnabled;
-(BOOL)postsKeyboardEvents;
-(int)brailleInputMode;
-(id)getInputEvents;
-(long long)mainSize;
-(long long)statusSize;
-(BOOL)setMainCells:(const char*)arg1 length:(long long)arg2;
-(BOOL)setStatusCells:(const char*)arg1 length:(long long)arg2;
-(id)modelIdentifier;

@end

