//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class NSURL;

@interface AXMModelDetectorNode : AXMEvaluationNode
{
    NSURL *_modelURL;
}

+ (id)title;
+ (_Bool)isSupported;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSURL *modelURL; // @synthesize modelURL=_modelURL;
- (void).cxx_destruct;
- (void)evaluate:(id)arg1;
- (_Bool)preloadModelIfNeeded:(id *)arg1;
- (_Bool)requiresVisionFramework;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)nodeInitialize;

@end

