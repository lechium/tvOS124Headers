/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSPlayInfoRequestContext, SSPlayInfoResponse, NSString;

@interface SSPlayInfoRequest : SSRequest <SSXPCCoding> {

	SSPlayInfoRequestContext* _context;
	SSPlayInfoResponse* _response;

}

@property (assign,nonatomic) id<SSPlayInfoRequestDelegate> delegate; 
@property (readonly) SSPlayInfoRequestContext * playInfoContext; 
@property (readonly) SSPlayInfoResponse * playInfoResponse; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithPlayInfoContext:(id)arg1 ;
-(void)startWithPlayInfoResponseBlock:(/*^block*/id)arg1 ;
-(SSPlayInfoRequestContext *)playInfoContext;
-(SSPlayInfoResponse *)playInfoResponse;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)start;
@end

