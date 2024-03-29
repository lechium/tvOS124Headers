/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/swift/libswiftFoundation.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSData.h>

@interface Foundation.__NSSwiftData : NSData {

	 _backing;
	 _range;

}

@property (readonly,nonatomic) long long length; 
@property (readonly,nonatomic) void* bytes; 
-(BOOL)_isCompact;
-(id)initWithBytesNoCopy:(void*)arg1 length:(long long)arg2 ;
-(id)initWithContentsOfMappedFile:(id)arg1 ;
-(id)initWithBase64EncodedData:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithBase64Encoding:(id)arg1 ;
-(BOOL)_providesConcreteBacking;
-(id)initWithBytesNoCopy:(void*)arg1 length:(long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(long long)arg2 deallocator:(/*^block*/id)arg3 ;
-(long long)length;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(void*)arg1 ;
-(void*)bytes;
-(id)mutableCopyWithZone:(void*)arg1 ;
-(id)initWithBase64EncodedString:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)initWithBytes:(void*)arg1 length:(long long)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
@end

