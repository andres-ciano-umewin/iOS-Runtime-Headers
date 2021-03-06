/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETARequester : NSObject {
    NSMapTable *_pendingRequests;
    NSLock *_pendingRequestsLock;
}

+ (id)sharedRequester;

- (void)_startRequest:(id)arg1 provider:(id)arg2 isRequestUpdate:(BOOL)arg3 connectionProperties:(const struct { unsigned int x1; double x2; unsigned int x3; }*)arg4 willSendRequest:(id /* block */)arg5 finished:(id /* block */)arg6 networkActivity:(id /* block */)arg7 error:(id /* block */)arg8;
- (void)cancelRequest:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)startRequest:(id)arg1 connectionProperties:(const struct { unsigned int x1; double x2; unsigned int x3; }*)arg2 willSendRequest:(id /* block */)arg3 finished:(id /* block */)arg4 networkActivity:(id /* block */)arg5 error:(id /* block */)arg6;
- (void)startRequest:(id)arg1 finished:(id /* block */)arg2 networkActivity:(id /* block */)arg3 error:(id /* block */)arg4;
- (void)startSimpleETARequest:(id)arg1 finished:(id /* block */)arg2 networkActivity:(id /* block */)arg3 error:(id /* block */)arg4;
- (void)updateRequest:(id)arg1 finished:(id /* block */)arg2 networkActivity:(id /* block */)arg3 error:(id /* block */)arg4;

@end
