/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSDirectoryEnumerator.h>

@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator {

	CFURLEnumeratorRef _enumerator;
	/*^block*/id _errorHandler;
	BOOL shouldContinue;

}

@property (copy) id errorHandler;              //@synthesize errorHandler=_errorHandler - In the implementation block
-(id)fileAttributes;
-(id)directoryAttributes;
-(void)skipDescendents;
-(id)initWithURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 errorHandler:(/*^block*/id)arg4 ;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(void)dealloc;
-(id)nextObject;
-(unsigned long long)level;
-(void)skipDescendants;
@end

