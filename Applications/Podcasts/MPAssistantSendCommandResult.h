//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError;

@interface MPAssistantSendCommandResult : NSObject
{
    NSArray *_returnStatuses;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSArray *returnStatuses; // @synthesize returnStatuses=_returnStatuses;
- (void).cxx_destruct;	// IMP=0x0000000100163120
- (id)initWithReturnStatuses:(id)arg1 error:(id)arg2;	// IMP=0x0000000100163044

@end

