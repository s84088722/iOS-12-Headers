//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (NSAttributedStringPersistenceAdditions)
+ (id)TT_attributedStringWithData:(id)arg1 dataPersister:(id)arg2 note:(id)arg3 shouldCreateAttachments:(_Bool)arg4 error:(id *)arg5;
+ (id)TT_attributedStringWithData:(id)arg1 dataPersister:(id)arg2 createNewAttachmentsInNote:(id)arg3 error:(id *)arg4;
+ (id)TT_attributedStringWithArchive:(const struct String *)arg1 dataPersister:(id)arg2 note:(id)arg3 shouldCreateNewAttachments:(_Bool)arg4 error:(id *)arg5;
- (_Bool)TT_isCopyableSize;
- (unsigned long long)TT_approximateAttachmentsSizeIncludingPreviews:(_Bool)arg1;
- (id)TT_serializeWithFlags:(unsigned long long)arg1 dataPersister:(id)arg2 managedObjectContext:(id)arg3;
- (void)TT_saveToArchive:(struct String *)arg1 flags:(unsigned long long)arg2 dataPersister:(id)arg3 managedObjectContext:(id)arg4;
@end

