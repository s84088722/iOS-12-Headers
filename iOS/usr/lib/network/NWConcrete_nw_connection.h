//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <network/OS_nw_connection-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, OS_nw_array, OS_nw_endpoint, OS_nw_endpoint_handler, OS_nw_parameters, OS_nw_read_request, OS_nw_write_request;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_connection : NSObject <OS_nw_connection>
{
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_parameters> *parameters;
    unsigned long long start_time;
    int state;
    struct netcore_stats_tcp_report *stats_report;
    int stats_reason;
    unsigned int should_report_stats:1;
    unsigned int stats_reported:1;
    unsigned int should_report_generic_stats:1;
    unsigned int generic_stats_reported:1;
    unsigned int hit_max_timestamps:1;
    unsigned int should_report_activities:1;
    unsigned int cancelled:1;
    unsigned int initial_writes_are_non_idempotent:1;
    unsigned int prohibit_set_queue:1;
    unsigned int batching:1;
    unsigned int has_batched_sends:1;
    unsigned int has_batched_receives:1;
    int alternate_path_state;
    struct os_unfair_lock_s lock;
    NSObject<OS_nw_endpoint_handler> *parent_endpoint_handler;
    NSObject<OS_nw_endpoint_handler> *connected_endpoint_handler;
    NSObject<OS_nw_array> *candidate_endpoint_handlers;
    NSObject<OS_nw_endpoint_handler> *transport_endpoint_handler;
    NSObject<OS_nw_write_request> *initial_write_requests;
    NSObject<OS_nw_read_request> *initial_read_requests;
    NSObject<OS_nw_endpoint_handler> *dry_run_endpoint_handler;
    NSObject<OS_nw_endpoint_handler> *ready_dry_run_endpoint_handler;
    unsigned int client_qos_class;
    NSObject<OS_dispatch_queue> *client_queue;
    CDUnknownBlockType client_handler;
    CDUnknownBlockType cancel_handler;
    CDUnknownBlockType viability_changed_handler;
    CDUnknownBlockType better_path_available_handler;
    CDUnknownBlockType alternate_path_state_handler;
    CDUnknownBlockType path_changed_handler;
    CDUnknownBlockType read_close_handler;
    CDUnknownBlockType write_close_handler;
    unsigned int adaptive_read_timeout_count;
    CDUnknownBlockType adaptive_read_timeout_handler;
    unsigned int adaptive_write_timeout_count;
    CDUnknownBlockType adaptive_write_timeout_handler;
    unsigned int excessive_keepalive_count;
    unsigned int excessive_keepalive_interval;
    CDUnknownBlockType excessive_keepalive_handler;
    unsigned int interface_time_delta;
    struct nw_connection_timestamp_s *timestamps;
    unsigned short num_timestamps;
    unsigned short used_timestamps;
    NSObject<OS_nw_array> *attempted_endpoints;
    struct nw_connection_throughput_monitor_s throughput_monitor;
    CDUnknownBlockType low_throughput_handler;
    NSObject<OS_nw_array> *activities;
    NSObject<OS_nw_array> *errors;
    unsigned int top_id;
    unsigned char top_uuid[16];
}

- (void).cxx_destruct;
- (id)redactedDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2 identifier:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

