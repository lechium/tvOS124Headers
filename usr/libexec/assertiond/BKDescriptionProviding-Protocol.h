//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BSDescriptionProviding-Protocol.h"

@class BSDescriptionBuilder, NSString;

@protocol BKDescriptionProviding <BSDescriptionProviding>
- (void)appendDescriptionWithMultilinePrefix:(NSString *)arg1 toBodySectionOfBuilder:(BSDescriptionBuilder *)arg2;
- (void)appendDescriptionWithMultilinePrefix:(NSString *)arg1 toBuilder:(BSDescriptionBuilder *)arg2;
- (void)appendSuccinctDescriptionToBuilder:(BSDescriptionBuilder *)arg1;
@end

