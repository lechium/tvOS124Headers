/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOStateCapturing.h>

@protocol OS_xpc_object, GEORequestCounterTicket;
@class NSURL, NSObject, GEOApplicationAuditToken, NSDictionary, NSData, NSString;

@interface GEODataRequest : NSObject <GEOStateCapturing> {

	NSURL* _URL;
	NSObject*<OS_xpc_object> _xpcRequest;
	GEOApplicationAuditToken* _auditToken;
	NSDictionary* _additionalHTTPHeaders;
	BOOL _needsProxy;
	NSData* _bodyData;
	NSData* _cachedData;
	double _timeoutInterval;
	char _HTTPMethod;
	int _kind;
	BOOL _HTTPShouldHandleCookies;
	BOOL _allowsCellularAccess;
	BOOL _requiresPowerPluggedIn;
	char _allowedRequestMode;
	BOOL _allowTLSSessionTicketUse;
	BOOL _allowTFOUse;
	id<GEORequestCounterTicket> _requestCounterTicket;
	NSString* _backgroundSessionIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSData * cachedData;                                               //@synthesize cachedData=_cachedData - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                                   //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> xpcRequest;                           //@synthesize xpcRequest=_xpcRequest - In the implementation block
@property (nonatomic,copy,readonly) GEOApplicationAuditToken * auditToken;                    //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,copy,readonly) NSData * bodyData;                                        //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,readonly) NSDictionary * additionalHTTPHeaders;                          //@synthesize additionalHTTPHeaders=_additionalHTTPHeaders - In the implementation block
@property (nonatomic,readonly) BOOL needsProxy;                                               //@synthesize needsProxy=_needsProxy - In the implementation block
@property (nonatomic,readonly) double timeoutInterval;                                        //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (nonatomic,readonly) char HTTPMethod;                                               //@synthesize HTTPMethod=_HTTPMethod - In the implementation block
@property (nonatomic,readonly) int kind;                                                      //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) BOOL HTTPShouldHandleCookies;                                  //@synthesize HTTPShouldHandleCookies=_HTTPShouldHandleCookies - In the implementation block
@property (nonatomic,readonly) BOOL allowsCellularAccess;                                     //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (nonatomic,readonly) BOOL requiresPowerPluggedIn;                                   //@synthesize requiresPowerPluggedIn=_requiresPowerPluggedIn - In the implementation block
@property (nonatomic,readonly) char allowedRequestMode;                                       //@synthesize allowedRequestMode=_allowedRequestMode - In the implementation block
@property (nonatomic,readonly) BOOL allowTLSSessionTicketUse;                                 //@synthesize allowTLSSessionTicketUse=_allowTLSSessionTicketUse - In the implementation block
@property (nonatomic,readonly) BOOL allowTFOUse;                                              //@synthesize allowTFOUse=_allowTFOUse - In the implementation block
@property (nonatomic,readonly) id<GEORequestCounterTicket> requestCounterTicket;              //@synthesize requestCounterTicket=_requestCounterTicket - In the implementation block
@property (nonatomic,readonly) NSString * backgroundSessionIdentifier;                        //@synthesize backgroundSessionIdentifier=_backgroundSessionIdentifier - In the implementation block
-(NSData *)cachedData;
-(NSString *)backgroundSessionIdentifier;
-(id)initWithKind:(int)arg1 URL:(id)arg2 xpcRequest:(id)arg3 auditToken:(id)arg4 timeoutInterval:(double)arg5 additionalHTTPHeaders:(id)arg6 needsProxy:(BOOL)arg7 HTTPMethod:(char)arg8 bodyData:(id)arg9 HTTPShouldHandleCookies:(BOOL)arg10 allowsCellularAccess:(BOOL)arg11 requiresPowerPluggedIn:(BOOL)arg12 allowTLSSessionTicketUse:(BOOL)arg13 allowTFOUse:(BOOL)arg14 allowedRequestMode:(char)arg15 userAgent:(id)arg16 entityTag:(id)arg17 cachedData:(id)arg18 requestCounterTicket:(id)arg19 backgroundSessionIdentifier:(id)arg20 ;
-(NSObject*<OS_xpc_object>)xpcRequest;
-(NSDictionary *)additionalHTTPHeaders;
-(id<GEORequestCounterTicket>)requestCounterTicket;
-(id)initWithKind:(int)arg1 URL:(id)arg2 xpcRequest:(id)arg3 auditToken:(id)arg4 timeoutInterval:(double)arg5 additionalHTTPHeaders:(id)arg6 needsProxy:(BOOL)arg7 HTTPMethod:(char)arg8 bodyData:(id)arg9 HTTPShouldHandleCookies:(BOOL)arg10 allowsCellularAccess:(BOOL)arg11 requiresPowerPluggedIn:(BOOL)arg12 allowTLSSessionTicketUse:(BOOL)arg13 allowTFOUse:(BOOL)arg14 allowedRequestMode:(char)arg15 userAgent:(id)arg16 entityTag:(id)arg17 cachedData:(id)arg18 requestCounterTicket:(id)arg19 ;
-(void)setCachedData:(NSData *)arg1 ;
-(char)HTTPMethod;
-(NSData *)bodyData;
-(id)publicLogDescription;
-(double)timeoutInterval;
-(BOOL)HTTPShouldHandleCookies;
-(BOOL)allowsCellularAccess;
-(BOOL)requiresPowerPluggedIn;
-(char)allowedRequestMode;
-(BOOL)needsProxy;
-(BOOL)allowTLSSessionTicketUse;
-(BOOL)allowTFOUse;
-(id)captureStateWithHints:(os_state_hints_s*)arg1 ;
-(id)newURLRequest;
-(id)initHttpOnlyRequestWithKind:(int)arg1 protobufRequest:(id)arg2 URL:(id)arg3 additionalHTTPHeaders:(id)arg4 needsProxy:(BOOL)arg5 allowCellularUse:(BOOL)arg6 compressRequest:(BOOL)arg7 requestCounterTicket:(id)arg8 ;
-(id)updatedRequestWithNewProtobufRequest:(id)arg1 ;
-(id)initWithKind:(int)arg1 protobufRequest:(id)arg2 URL:(id)arg3 additionalHTTPHeaders:(id)arg4 needsProxy:(BOOL)arg5 auditToken:(id)arg6 traits:(id)arg7 requestCounterTicket:(id)arg8 ;
-(id)updatedRequestWithNewBodyData:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(NSURL *)URL;
-(int)kind;
-(GEOApplicationAuditToken *)auditToken;
@end
