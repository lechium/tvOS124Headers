/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PSIIntArray : NSObject {

	sqlite3_intarrayRef _elementArray;
	long long _staticElementBuffer[256];
	long long* _elementBuffer;
	unsigned long long _elementBufferSize;
	BOOL _freeOnUnprepare;

}

@property (nonatomic,readonly) long long* elementBuffer; 
-(void)unbind;
-(void)unprepare;
-(void)_prepareForNumberOfElements:(unsigned long long)arg1 ;
-(void)_unprepare;
-(id)initWithLabel:(id)arg1 database:(sqlite3Ref)arg2 ;
-(long long*)elementBuffer;
-(void)prepareForNumberOfElements:(unsigned long long)arg1 ;
-(void)bindElements:(CFSetRef)arg1 ;
-(void)bindElements:(CFArrayRef)arg1 range:(NSRange)arg2 ;
-(void)bindElements:(const long long*)arg1 numberOfElements:(unsigned long long)arg2 ;
-(void)dealloc;
@end

