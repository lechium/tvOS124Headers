/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/ML3DatabaseFunction.h>

@interface ML3DatabaseFunctionPointer : ML3DatabaseFunction {

	/*function pointer*/void* _functionPointer;
	void* _userData;

}

@property (assign,nonatomic) /*function pointer*/void* functionPointer;              //@synthesize functionPointer=_functionPointer - In the implementation block
@property (assign,nonatomic) void* userData;                                         //@synthesize userData=_userData - In the implementation block
-(BOOL)registerWithConnection:(id)arg1 ;
-(/*function pointer*/void*)functionPointer;
-(void)setFunctionPointer:(/*function pointer*/void*)arg1 ;
-(void*)userData;
-(void)setUserData:(void*)arg1 ;
@end

