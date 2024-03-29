/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOProtobufSessionTaskDelegate.h>

@protocol GEOServiceRequestConfiguring;
@class GEOProtobufSessionTask, PBRequest, NSString, GEOApplicationAuditToken, GEOMapServiceTraits;

@interface _GEODataSessionTaskRequesterOp : NSObject <GEOProtobufSessionTaskDelegate> {

	GEOProtobufSessionTask* _task;
	BOOL _canceled;
	PBRequest* _request;
	NSString* _debugRequestName;
	/*^block*/id _completionHandler;
	/*^block*/id _validationHandler;
	id<GEOServiceRequestConfiguring> _config;
	NSString* _appIdentifier;
	GEOApplicationAuditToken* _auditToken;
	int _dataRequestKind;
	GEOMapServiceTraits* _traits;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)protobufSession:(id)arg1 didCompleteTask:(id)arg2 ;
-(id)protobufSession:(id)arg1 validateResponse:(id)arg2 ;
-(id)initWithRequest:(id)arg1 auditToken:(id)arg2 config:(id)arg3 timeout:(double)arg4 dataRequestKind:(int)arg5 traits:(id)arg6 ;
-(void)startWithValidationHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_fullURL;
-(id)_userInfoForTask:(id)arg1 ;
-(void)dealloc;
-(void)cancel;
-(void)_cleanup;
@end

