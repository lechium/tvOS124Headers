/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEFileHandle.h>

@class NSNumber, NSData;

@interface NEFlowDivertFileHandle : NEFileHandle {

	NSNumber* _controlUnit;
	NSData* _keyMaterial;

}

@property (readonly) NSNumber * controlUnit;              //@synthesize controlUnit=_controlUnit - In the implementation block
@property (readonly) NSData * keyMaterial;                //@synthesize keyMaterial=_keyMaterial - In the implementation block
-(id)initFromDictionary:(id)arg1 ;
-(id)initFlowDivertControlSocketDisableAppMap:(BOOL)arg1 ;
-(id)getUnitForSocket:(int)arg1 ;
-(NSNumber *)controlUnit;
-(NSData *)keyMaterial;
-(id)initFlowDivertControlSocket;
-(id)initFlowDivertDataSocket;
-(id)dictionary;
-(id)description;
-(unsigned long long)type;
@end
