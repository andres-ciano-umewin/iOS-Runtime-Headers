/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLDeviceDiscoveryController : NSObject <WLDeviceDiscoverySocketHandlerDelegate> {
    NSString *_allowedAddress;
    unsigned int _countOfPairingAttemptsWithCurrentSecret;
    NSObject<OS_dispatch_queue> *_discoveryRequestSerialQueue;
    NSObject<OS_dispatch_source> *_incomingConnSource;
    int _listenerSocket;
    id /* block */ _nextIncomingConnectionHandler;
    NSString *_pairingSecret;
    NSMutableArray *_socketHandlers;
    NSMutableArray *_sourceDevices;
}

@property (nonatomic, readonly, copy) NSArray *sourceDevices;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_allowConnectionsFromAnyAddress;
- (id)_generatePairingSecret;
- (id)_legacyPairingWifiPskWithSecret:(id)arg1;
- (void)_postSourceDevicesDidChangeNotification;
- (void)_queue_startDiscoveryWithCompletion:(id /* block */)arg1;
- (void)_queue_stopDeviceDiscoveryWithCompletion:(id /* block */)arg1;
- (void)_queue_stopWiFiAndDeviceDiscoveryWithCompletion:(id /* block */)arg1;
- (BOOL)_shouldForceDiscoveryError;
- (id)_ssidWithSecret:(id)arg1;
- (int)acceptIncomingConnectionWithListenerSocket:(int)arg1 nonBlocking:(BOOL)arg2;
- (void)attemptDirectConnectionToAddress:(id)arg1;
- (int)createListenerSocketOnPort:(unsigned int)arg1;
- (void)deviceDiscoverySocketHandler:(id)arg1 didFailToHandshakeWithSourceDevice:(id)arg2 error:(id)arg3;
- (void)deviceDiscoverySocketHandler:(id)arg1 didFinishHandshakeWithSourceDevice:(id)arg2;
- (id)init;
- (id)listenForConnectionOnSocket:(int)arg1 withConnectionHandler:(id /* block */)arg2;
- (void)setNextIncomingConnectionHandler:(id /* block */)arg1;
- (id)sourceDevices;
- (void)startWiFiAndDeviceDiscoveryWithCompletion:(id /* block */)arg1;
- (void)stopDeviceDiscoveryWithCompletion:(id /* block */)arg1;
- (void)stopWiFiAndDeviceDiscoveryWithCompletion:(id /* block */)arg1;

@end
