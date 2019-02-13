//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUGLObject.h>

@class NSMutableDictionary;

@interface NUGLFramebuffer : NUGLObject
{
    NSMutableDictionary *_attachments;
}

- (void).cxx_destruct;
- (void)unbind:(unsigned int)arg1 context:(id)arg2;
- (void)bind:(unsigned int)arg1 context:(id)arg2;
- (void)useWithTarget:(unsigned int)arg1 context:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)read:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)write:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeAllAttachments;
- (void)detach:(id)arg1 from:(unsigned int)arg2;
- (void)attach:(id)arg1 to:(unsigned int)arg2;
- (void)delete;
- (void)generate:(id)arg1;
- (id)init;

@end

