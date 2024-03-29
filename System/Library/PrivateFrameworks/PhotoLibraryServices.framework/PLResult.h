/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface PLResult : NSObject {

	id _result;
	NSError* _error;

}

@property (readonly) id result;                         //@synthesize result=_result - In the implementation block
@property (copy,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
@property (readonly) BOOL isSuccess; 
@property (readonly) BOOL isFailure; 
+(id)successWithResult:(id)arg1 ;
+(id)failureWithError:(id)arg1 ;
-(BOOL)isSuccess;
-(id)resultWithError:(id*)arg1 ;
-(id)initWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)isFailure;
-(id)result;
-(NSError *)error;
@end

