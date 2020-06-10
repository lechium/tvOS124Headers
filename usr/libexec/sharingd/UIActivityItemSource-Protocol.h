//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIActivityViewController, UIImage;

@protocol UIActivityItemSource <NSObject>
- (id)activityViewController:(UIActivityViewController *)arg1 itemForActivityType:(NSString *)arg2;
- (id)activityViewControllerPlaceholderItem:(UIActivityViewController *)arg1;

@optional
- (UIImage *)activityViewController:(UIActivityViewController *)arg1 thumbnailImageForActivityType:(NSString *)arg2 suggestedSize:(struct CGSize)arg3;
- (NSString *)activityViewController:(UIActivityViewController *)arg1 dataTypeIdentifierForActivityType:(NSString *)arg2;
- (NSString *)activityViewController:(UIActivityViewController *)arg1 subjectForActivityType:(NSString *)arg2;
@end

