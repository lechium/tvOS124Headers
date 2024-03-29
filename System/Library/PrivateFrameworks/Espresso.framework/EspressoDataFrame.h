/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface EspressoDataFrame : NSObject {

	NSMutableDictionary* _inputAttachments;
	NSMutableDictionary* _outputAttachments;
	NSMutableDictionary* _groundTruthAttachments;

}

@property (retain) NSMutableDictionary * inputAttachments;                    //@synthesize inputAttachments=_inputAttachments - In the implementation block
@property (retain) NSMutableDictionary * outputAttachments;                   //@synthesize outputAttachments=_outputAttachments - In the implementation block
@property (retain) NSMutableDictionary * groundTruthAttachments;              //@synthesize groundTruthAttachments=_groundTruthAttachments - In the implementation block
@property (readonly) NSArray * inputAttachmentNames; 
@property (readonly) NSArray * outputAttachmentNames; 
@property (readonly) NSArray * groundTruthAttachmentNames; 
-(void)loadFromDict:(id)arg1 frameStorage:(id)arg2 ;
-(id)getInputAttachment:(id)arg1 ;
-(id)getOutputAttachment:(id)arg1 ;
-(id)getGroundTruthAttachment:(id)arg1 ;
-(NSArray *)inputAttachmentNames;
-(NSArray *)groundTruthAttachmentNames;
-(NSArray *)outputAttachmentNames;
-(NSMutableDictionary *)inputAttachments;
-(void)setInputAttachments:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)outputAttachments;
-(void)setOutputAttachments:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)groundTruthAttachments;
-(void)setGroundTruthAttachments:(NSMutableDictionary *)arg1 ;
-(id)init;
@end

