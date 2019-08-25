/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>

@class NSArray, NSDictionary, DASettingsRequestParams;

@interface ASSettingsTask : ASTask {

	int _key;
	NSArray* _getters;
	NSDictionary* _setters;
	DASettingsRequestParams* _requestParams;
	long long _status;
	id _result;

}

@property (assign,nonatomic) int key;                                              //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) long long status;                                     //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) id result;                                            //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSArray * getters;                                    //@synthesize getters=_getters - In the implementation block
@property (nonatomic,retain) NSDictionary * setters;                               //@synthesize setters=_setters - In the implementation block
@property (nonatomic,retain) DASettingsRequestParams * requestParams;              //@synthesize requestParams=_requestParams - In the implementation block
-(void)setResult:(id)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(long long)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
-(id)requestBody;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(void)setGetters:(NSArray *)arg1 ;
-(void)setSetters:(NSDictionary *)arg1 ;
-(NSArray *)getters;
-(NSDictionary *)setters;
-(DASettingsRequestParams *)requestParams;
-(void)setRequestParams:(DASettingsRequestParams *)arg1 ;
-(id)init;
-(int)key;
-(long long)status;
-(id)result;
-(void)setKey:(int)arg1 ;
-(void)setStatus:(long long)arg1 ;
@end
