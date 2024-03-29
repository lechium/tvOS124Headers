/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOServiceRequestConfiguring <NSObject>
@optional
-(double)timeout;

@required
-(unsigned long long)urlType;
-(int)dataRequestKindForRequest:(id)arg1;
-(id)additionalURLQueryItems;
-(id)additionalHTTPHeaders;
-(id)debugRequestName;
-(id)serviceTypeNumber;
-(BOOL)shouldThrottleRequests;
-(id)throttleKey;
-(long long)experimentType;
-(int)experimentDispatcherRequestTypeForRequest:(id)arg1;
-(unsigned char)requestCounterInfoTypeForRequest:(id)arg1;

@end

