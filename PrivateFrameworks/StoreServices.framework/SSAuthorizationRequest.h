/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSNumber, <SSAuthorizationRequestDelegate>;

@interface SSAuthorizationRequest : SSRequest {
    NSNumber *_accountIdentifier;
    id _token;
}

@property(readonly) NSNumber * accountIdentifier;
@property(readonly) id authorizationToken;
@property <SSAuthorizationRequestDelegate> * delegate;

- (id)accountIdentifier;
- (id)authorizationToken;
- (id)copyPropertyListEncoding;
- (void)dealloc;
- (BOOL)handleFinishResponse:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithAuthorizationToken:(id)arg1 accountIdentifier:(id)arg2;
- (id)initWithPropertyListEncoding:(id)arg1;
- (BOOL)issueRequestForIdentifier:(id)arg1 error:(id*)arg2;

@end