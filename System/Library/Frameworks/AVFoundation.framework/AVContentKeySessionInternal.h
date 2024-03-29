/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReferencingDelegateStorage, AVWeakReference, NSURL, NSData, NSObject, NSHashTable, NSMutableArray, NSString, NSMutableDictionary;

@interface AVContentKeySessionInternal : NSObject {

	AVWeakReferencingDelegateStorage* _delegateStorage;
	AVWeakReference* _weakReference;
	NSURL* _storageURL;
	NSData* _appIdentifier;
	BOOL _isExpired;
	BOOL _internal;
	NSObject*<OS_dispatch_queue> _threadSafetyQ;
	CFDataRef _protectorSessionIdentifier;
	NSHashTable* _contentKeyRecipients;
	OpaqueFigContentKeySessionRef _figContentKeySession;
	NSMutableArray* _cryptorsList;
	NSString* _keySystem;
	NSMutableDictionary* keyRequestsByRequestID;

}
@end

