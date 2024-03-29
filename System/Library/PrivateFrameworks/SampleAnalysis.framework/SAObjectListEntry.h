/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SASerializable;
@interface SAObjectListEntry : NSObject {

	id<SASerializable> _instance;
	unsigned long long _size;

}

@property (retain) id<SASerializable> instance;              //@synthesize instance=_instance - In the implementation block
@property (assign) unsigned long long size;                  //@synthesize size=_size - In the implementation block
-(id<SASerializable>)instance;
-(void)setInstance:(id<SASerializable>)arg1 ;
-(unsigned long long)size;
-(void)setSize:(unsigned long long)arg1 ;
@end

