/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class VMUMutableClassInfo;

@interface VMUSwiftRuntimeInfo : NSObject {

	unsigned long long _nativeWeakReferenceMarkerMask;
	unsigned long long _nativeWeakReferenceMarkerValue;
	unsigned long long _nativeWeakReferencePointerMask;
	BOOL _nativeWeakReferencePointerIsSideTable;
	unsigned long long _refcountIsSideTableMarkerMask;
	unsigned long long _refcountIsSideTableMarkerValue;
	unsigned long long _sideTablePointerMask;
	unsigned char _sideTablePointerRightShift;
	unsigned char _sideTablePointerLeftShift;
	VMUMutableClassInfo* _sideTableLayout;
	VMUMutableClassInfo* _unownedExtraDataLayout;
	BOOL _runtimeHasStableABI;

}

@property (nonatomic,readonly) unsigned long long nativeWeakReferenceMarkerMask;               //@synthesize nativeWeakReferenceMarkerMask=_nativeWeakReferenceMarkerMask - In the implementation block
@property (nonatomic,readonly) unsigned long long nativeWeakReferenceMarkerValue;              //@synthesize nativeWeakReferenceMarkerValue=_nativeWeakReferenceMarkerValue - In the implementation block
@property (nonatomic,readonly) unsigned long long nativeWeakReferencePointerMask;              //@synthesize nativeWeakReferencePointerMask=_nativeWeakReferencePointerMask - In the implementation block
@property (nonatomic,readonly) BOOL nativeWeakReferencePointerIsSideTable;                     //@synthesize nativeWeakReferencePointerIsSideTable=_nativeWeakReferencePointerIsSideTable - In the implementation block
@property (nonatomic,readonly) unsigned long long refcountIsSideTableMarkerMask;               //@synthesize refcountIsSideTableMarkerMask=_refcountIsSideTableMarkerMask - In the implementation block
@property (nonatomic,readonly) unsigned long long refcountIsSideTableMarkerValue;              //@synthesize refcountIsSideTableMarkerValue=_refcountIsSideTableMarkerValue - In the implementation block
@property (nonatomic,readonly) unsigned long long sideTablePointerMask;                        //@synthesize sideTablePointerMask=_sideTablePointerMask - In the implementation block
@property (nonatomic,readonly) unsigned char sideTablePointerRightShift;                       //@synthesize sideTablePointerRightShift=_sideTablePointerRightShift - In the implementation block
@property (nonatomic,readonly) unsigned char sideTablePointerLeftShift;                        //@synthesize sideTablePointerLeftShift=_sideTablePointerLeftShift - In the implementation block
@property (nonatomic,readonly) VMUMutableClassInfo * sideTableLayout;                          //@synthesize sideTableLayout=_sideTableLayout - In the implementation block
@property (nonatomic,readonly) VMUMutableClassInfo * unownedExtraDataLayout;                   //@synthesize unownedExtraDataLayout=_unownedExtraDataLayout - In the implementation block
@property (nonatomic,readonly) BOOL runtimeHasStableABI;                                       //@synthesize runtimeHasStableABI=_runtimeHasStableABI - In the implementation block
-(unsigned long long)nativeWeakReferencePointerMask;
-(unsigned long long)refcountIsSideTableMarkerMask;
-(unsigned long long)refcountIsSideTableMarkerValue;
-(unsigned long long)sideTablePointerMask;
-(unsigned char)sideTablePointerRightShift;
-(unsigned char)sideTablePointerLeftShift;
-(VMUMutableClassInfo *)sideTableLayout;
-(BOOL)nativeWeakReferencePointerIsSideTable;
-(unsigned long long)nativeWeakReferenceMarkerMask;
-(unsigned long long)nativeWeakReferenceMarkerValue;
-(VMUMutableClassInfo *)unownedExtraDataLayout;
-(id)initWithSwiftCore:(CSTypeRef)arg1 memoryReader:(/*^block*/id)arg2 ;
-(BOOL)runtimeHasStableABI;
@end

