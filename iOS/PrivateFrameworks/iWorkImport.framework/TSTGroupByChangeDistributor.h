//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCEDistributor.h>

#import <iWorkImport/TSTGroupByChangeProtocol-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSTGroupByChangeDistributor : TSCEDistributor <TSTGroupByChangeProtocol>
{
}

- (id)protocol;
- (void)didChangeGroupByStructure;
- (void)didRemoveRowUID:(const UUIDData_5fbc143e *)arg1 fromGroup:(id)arg2;
- (void)didAddRowUID:(const UUIDData_5fbc143e *)arg1 toGroup:(id)arg2;
- (void)didRemoveGroup:(id)arg1;
- (void)willRemoveGroup:(id)arg1;
- (void)didCreateGroup:(id)arg1;
- (void)endOfGroupingChangesBatch;
- (void)startOfGroupingChangesBatch;

@end

