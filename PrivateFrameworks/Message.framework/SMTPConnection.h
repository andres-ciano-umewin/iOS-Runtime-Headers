/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableArray, NSMutableData, NSString;

@interface SMTPConnection : Connection {
    unsigned int _hideLoggedData : 1;
    unsigned int _lastResponseCode : 31;
    id _delegate;
    NSString *_domainName;
    NSInteger _lastCommandTimestamp;
    id _lastResponse;
    NSMutableData *_mdata;
    NSInteger _originalSocketTimeout;
    NSMutableArray *_serviceExtensions;
}

+ (void)initialize;

- (BOOL)_connectUsingAccount:(id)arg1;
- (id)_dataForCommand:(const char *)arg1 length:(NSUInteger)arg2 argument:(id)arg3 trailer:(unsigned char)arg4;
- (NSInteger)_doHandshakeUsingAccount:(id)arg1;
- (NSInteger)_getReply;
- (BOOL)_hasParameter:(id)arg1 forKeyword:(id)arg2;
- (void)_readResponseRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg1 isContinuation:(BOOL*)arg2;
- (NSInteger)_sendCommand:(const char *)arg1 length:(NSUInteger)arg2 argument:(id)arg3 trailer:(unsigned char)arg4;
- (void)abort;
- (BOOL)authenticateUsingAccount:(id)arg1 authenticator:(id)arg2;
- (BOOL)authenticateUsingAccount:(id)arg1;
- (id)authenticationMechanisms;
- (BOOL)connectUsingAccount:(id)arg1;
- (id)dataForDataCmd;
- (id)dataForMailFrom:(id)arg1;
- (id)dataForRcptTo:(id)arg1;
- (void)dealloc;
- (id)domainName;
- (id)init;
- (id)lastResponse;
- (NSUInteger)lastResponseCode;
- (NSInteger)mailFrom:(id)arg1 recipients:(id)arg2 withData:(id)arg3 host:(id)arg4 errorMessage:(id*)arg5 serverResponse:(id*)arg6 displayError:(BOOL*)arg7 errorCode:(NSInteger*)arg8;
- (NSInteger)mailFrom:(id)arg1;
- (unsigned long long)maximumMessageBytes;
- (NSInteger)noop;
- (NSInteger)quit;
- (NSInteger)rcptTo:(id)arg1;
- (NSInteger)sendData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDomainName:(id)arg1;
- (NSInteger)state;
- (BOOL)supportsOutboxCopy;
- (BOOL)supportsPipelining;
- (long)timeLastCommandWasSent;

@end