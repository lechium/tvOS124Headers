//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVSDocumentLoader.h"

@interface TVSDocumentLoader (TVAdditions)
+ (id)_APIBaseURL;	// IMP=0x0000000100007a20
+ (id)_activeDSID;	// IMP=0x0000000100007910
+ (_Bool)hasStoreAccount;	// IMP=0x00000001000074a4
+ (id)documentLoaderWithAPIEndpoint:(id)arg1 queryParameters:(id)arg2 protocolVersion:(unsigned long long)arg3;	// IMP=0x0000000100006dbc
+ (id)documentLoaderWithAPIEndpoint:(id)arg1 queryParameters:(id)arg2;	// IMP=0x0000000100006d54
+ (id)documentLoaderWithURL:(id)arg1;	// IMP=0x0000000100006ce4
+ (id)documentLoaderWithURLRequest:(id)arg1;	// IMP=0x0000000100006c50
- (void)loadWithWeakObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000768c
- (void)loadJSONWithReponseBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000074e0
@end

