/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData, NSError, NSURLSessionTaskMetrics, AMSURLRequestProperties, AMSURLAction, NSURLResponse, NSURLSession, NSURLSessionTask;

@interface AMSURLTaskInfo : NSObject {

	NSMutableData* _data;
	NSError* _error;
	NSURLSessionTaskMetrics* _metrics;
	AMSURLRequestProperties* _properties;
	AMSURLAction* _receivedAction;
	NSURLResponse* _response;
	NSURLSession* _session;
	NSURLSessionTask* _task;
	/*^block*/id _completionBlock;

}

@property (nonatomic,retain) NSMutableData * data;                              //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSError * error;                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSURLSessionTaskMetrics * metrics;                 //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) AMSURLRequestProperties * properties;              //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) AMSURLAction * receivedAction;                     //@synthesize receivedAction=_receivedAction - In the implementation block
@property (nonatomic,retain) NSURLResponse * response;                          //@synthesize response=_response - In the implementation block
@property (assign,nonatomic,__weak) NSURLSession * session;                     //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSURLSessionTask * task;                           //@synthesize task=_task - In the implementation block
@property (nonatomic,copy) id completionBlock;                                  //@synthesize completionBlock=_completionBlock - In the implementation block
+(id)sharedTaskQueue;
+(id)sharedTaskStore;
+(id)taskInfoForTask:(id)arg1 ;
+(id)createTaskInfoForTask:(id)arg1 ;
+(void)removeTaskInfoForTask:(id)arg1 ;
-(void)setSession:(NSURLSession *)arg1 ;
-(NSURLSession *)session;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(void)setTask:(NSURLSessionTask *)arg1 ;
-(AMSURLAction *)receivedAction;
-(void)setReceivedAction:(AMSURLAction *)arg1 ;
-(void)setMetrics:(NSURLSessionTaskMetrics *)arg1 ;
-(NSURLSessionTaskMetrics *)metrics;
-(void)setCompletionBlock:(id)arg1 ;
-(NSURLResponse *)response;
-(NSMutableData *)data;
-(void)setProperties:(AMSURLRequestProperties *)arg1 ;
-(void)setData:(NSMutableData *)arg1 ;
-(AMSURLRequestProperties *)properties;
-(id)completionBlock;
-(NSURLSessionTask *)task;
-(id)initWithTask:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

