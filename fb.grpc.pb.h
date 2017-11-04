// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: fb.proto
// Original file comments:
// Copyright 2015, Google Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
#ifndef GRPC_fb_2eproto__INCLUDED
#define GRPC_fb_2eproto__INCLUDED

#include "fb.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace assignment2 {

// The messenger service definition.
class FBChatServer final {
 public:
  static constexpr char const* service_full_name() {
    return "assignment2.FBChatServer";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Login(::grpc::ClientContext* context, const ::assignment2::ClientRequest& request, ::assignment2::ServerReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::assignment2::ServerReply>> AsyncLogin(::grpc::ClientContext* context, const ::assignment2::ClientRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::assignment2::ServerReply>>(AsyncLoginRaw(context, request, cq));
    }
    virtual ::grpc::Status Connect(::grpc::ClientContext* context, const ::assignment2::ClientRequest& request, ::assignment2::ServerReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::assignment2::ServerReply>> AsyncConnect(::grpc::ClientContext* context, const ::assignment2::ClientRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::assignment2::ServerReply>>(AsyncConnectRaw(context, request, cq));
    }
    virtual ::grpc::Status List(::grpc::ClientContext* context, const ::assignment2::ClientRequest& request, ::assignment2::ShowList* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::assignment2::ShowList>> AsyncList(::grpc::ClientContext* context, const ::assignment2::ClientRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::assignment2::ShowList>>(AsyncListRaw(context, request, cq));
    }
    virtual ::grpc::Status Join(::grpc::ClientContext* context, const ::assignment2::ClientRequest& request, ::assignment2::ServerReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::assignment2::ServerReply>> AsyncJoin(::grpc::ClientContext* context, const ::assignment2::ClientRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::assignment2::ServerReply>>(AsyncJoinRaw(context, request, cq));
    }
    virtual ::grpc::Status Leave(::grpc::ClientContext* context, const ::assignment2::ClientRequest& request, ::assignment2::ServerReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::assignment2::ServerReply>> AsyncLeave(::grpc::ClientContext* context, const ::assignment2::ClientRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::assignment2::ServerReply>>(AsyncLeaveRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::assignment2::Post, ::assignment2::Post>> Chat(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::assignment2::Post, ::assignment2::Post>>(ChatRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::assignment2::Post, ::assignment2::Post>> AsyncChat(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::assignment2::Post, ::assignment2::Post>>(AsyncChatRaw(context, cq, tag));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::assignment2::ServerReply>* AsyncLoginRaw(::grpc::ClientContext* context, const ::assignment2::ClientRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::assignment2::ServerReply>* AsyncConnectRaw(::grpc::ClientContext* context, const ::assignment2::ClientRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::assignment2::ShowList>* AsyncListRaw(::grpc::ClientContext* context, const ::assignment2::ClientRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::assignment2::ServerReply>* AsyncJoinRaw(::grpc::ClientContext* context, const ::assignment2::ClientRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::assignment2::ServerReply>* AsyncLeaveRaw(::grpc::ClientContext* context, const ::assignment2::ClientRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderWriterInterface< ::assignment2::Post, ::assignment2::Post>* ChatRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::assignment2::Post, ::assignment2::Post>* AsyncChatRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status Login(::grpc::ClientContext* context, const ::assignment2::ClientRequest& request, ::assignment2::ServerReply* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::assignment2::ServerReply>> AsyncLogin(::grpc::ClientContext* context, const ::assignment2::ClientRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::assignment2::ServerReply>>(AsyncLoginRaw(context, request, cq));
    }
    ::grpc::Status Connect(::grpc::ClientContext* context, const ::assignment2::ClientRequest& request, ::assignment2::ServerReply* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::assignment2::ServerReply>> AsyncConnect(::grpc::ClientContext* context, const ::assignment2::ClientRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::assignment2::ServerReply>>(AsyncConnectRaw(context, request, cq));
    }
    ::grpc::Status List(::grpc::ClientContext* context, const ::assignment2::ClientRequest& request, ::assignment2::ShowList* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::assignment2::ShowList>> AsyncList(::grpc::ClientContext* context, const ::assignment2::ClientRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::assignment2::ShowList>>(AsyncListRaw(context, request, cq));
    }
    ::grpc::Status Join(::grpc::ClientContext* context, const ::assignment2::ClientRequest& request, ::assignment2::ServerReply* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::assignment2::ServerReply>> AsyncJoin(::grpc::ClientContext* context, const ::assignment2::ClientRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::assignment2::ServerReply>>(AsyncJoinRaw(context, request, cq));
    }
    ::grpc::Status Leave(::grpc::ClientContext* context, const ::assignment2::ClientRequest& request, ::assignment2::ServerReply* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::assignment2::ServerReply>> AsyncLeave(::grpc::ClientContext* context, const ::assignment2::ClientRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::assignment2::ServerReply>>(AsyncLeaveRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderWriter< ::assignment2::Post, ::assignment2::Post>> Chat(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::assignment2::Post, ::assignment2::Post>>(ChatRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::assignment2::Post, ::assignment2::Post>> AsyncChat(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::assignment2::Post, ::assignment2::Post>>(AsyncChatRaw(context, cq, tag));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::assignment2::ServerReply>* AsyncLoginRaw(::grpc::ClientContext* context, const ::assignment2::ClientRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::assignment2::ServerReply>* AsyncConnectRaw(::grpc::ClientContext* context, const ::assignment2::ClientRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::assignment2::ShowList>* AsyncListRaw(::grpc::ClientContext* context, const ::assignment2::ClientRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::assignment2::ServerReply>* AsyncJoinRaw(::grpc::ClientContext* context, const ::assignment2::ClientRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::assignment2::ServerReply>* AsyncLeaveRaw(::grpc::ClientContext* context, const ::assignment2::ClientRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientReaderWriter< ::assignment2::Post, ::assignment2::Post>* ChatRaw(::grpc::ClientContext* context) override;
    ::grpc::ClientAsyncReaderWriter< ::assignment2::Post, ::assignment2::Post>* AsyncChatRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) override;
    const ::grpc::RpcMethod rpcmethod_Login_;
    const ::grpc::RpcMethod rpcmethod_Connect_;
    const ::grpc::RpcMethod rpcmethod_List_;
    const ::grpc::RpcMethod rpcmethod_Join_;
    const ::grpc::RpcMethod rpcmethod_Leave_;
    const ::grpc::RpcMethod rpcmethod_Chat_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Login(::grpc::ServerContext* context, const ::assignment2::ClientRequest* request, ::assignment2::ServerReply* response);
    virtual ::grpc::Status Connect(::grpc::ServerContext* context, const ::assignment2::ClientRequest* request, ::assignment2::ServerReply* response);
    virtual ::grpc::Status List(::grpc::ServerContext* context, const ::assignment2::ClientRequest* request, ::assignment2::ShowList* response);
    virtual ::grpc::Status Join(::grpc::ServerContext* context, const ::assignment2::ClientRequest* request, ::assignment2::ServerReply* response);
    virtual ::grpc::Status Leave(::grpc::ServerContext* context, const ::assignment2::ClientRequest* request, ::assignment2::ServerReply* response);
    virtual ::grpc::Status Chat(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::assignment2::Post, ::assignment2::Post>* stream);
  };
  template <class BaseClass>
  class WithAsyncMethod_Login : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Login() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Login() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Login(::grpc::ServerContext* context, const ::assignment2::ClientRequest* request, ::assignment2::ServerReply* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestLogin(::grpc::ServerContext* context, ::assignment2::ClientRequest* request, ::grpc::ServerAsyncResponseWriter< ::assignment2::ServerReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Connect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Connect() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Connect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Connect(::grpc::ServerContext* context, const ::assignment2::ClientRequest* request, ::assignment2::ServerReply* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestConnect(::grpc::ServerContext* context, ::assignment2::ClientRequest* request, ::grpc::ServerAsyncResponseWriter< ::assignment2::ServerReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_List : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_List() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_List() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status List(::grpc::ServerContext* context, const ::assignment2::ClientRequest* request, ::assignment2::ShowList* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestList(::grpc::ServerContext* context, ::assignment2::ClientRequest* request, ::grpc::ServerAsyncResponseWriter< ::assignment2::ShowList>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Join : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Join() {
      ::grpc::Service::MarkMethodAsync(3);
    }
    ~WithAsyncMethod_Join() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Join(::grpc::ServerContext* context, const ::assignment2::ClientRequest* request, ::assignment2::ServerReply* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestJoin(::grpc::ServerContext* context, ::assignment2::ClientRequest* request, ::grpc::ServerAsyncResponseWriter< ::assignment2::ServerReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(3, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Leave : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Leave() {
      ::grpc::Service::MarkMethodAsync(4);
    }
    ~WithAsyncMethod_Leave() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Leave(::grpc::ServerContext* context, const ::assignment2::ClientRequest* request, ::assignment2::ServerReply* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestLeave(::grpc::ServerContext* context, ::assignment2::ClientRequest* request, ::grpc::ServerAsyncResponseWriter< ::assignment2::ServerReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(4, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Chat : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Chat() {
      ::grpc::Service::MarkMethodAsync(5);
    }
    ~WithAsyncMethod_Chat() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Chat(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::assignment2::Post, ::assignment2::Post>* stream) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestChat(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::assignment2::Post, ::assignment2::Post>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(5, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Login<WithAsyncMethod_Connect<WithAsyncMethod_List<WithAsyncMethod_Join<WithAsyncMethod_Leave<WithAsyncMethod_Chat<Service > > > > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_Login : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Login() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Login() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Login(::grpc::ServerContext* context, const ::assignment2::ClientRequest* request, ::assignment2::ServerReply* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Connect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Connect() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Connect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Connect(::grpc::ServerContext* context, const ::assignment2::ClientRequest* request, ::assignment2::ServerReply* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_List : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_List() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_List() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status List(::grpc::ServerContext* context, const ::assignment2::ClientRequest* request, ::assignment2::ShowList* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Join : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Join() {
      ::grpc::Service::MarkMethodGeneric(3);
    }
    ~WithGenericMethod_Join() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Join(::grpc::ServerContext* context, const ::assignment2::ClientRequest* request, ::assignment2::ServerReply* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Leave : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Leave() {
      ::grpc::Service::MarkMethodGeneric(4);
    }
    ~WithGenericMethod_Leave() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Leave(::grpc::ServerContext* context, const ::assignment2::ClientRequest* request, ::assignment2::ServerReply* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Chat : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Chat() {
      ::grpc::Service::MarkMethodGeneric(5);
    }
    ~WithGenericMethod_Chat() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Chat(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::assignment2::Post, ::assignment2::Post>* stream) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Login : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Login() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::StreamedUnaryHandler< ::assignment2::ClientRequest, ::assignment2::ServerReply>(std::bind(&WithStreamedUnaryMethod_Login<BaseClass>::StreamedLogin, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Login() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Login(::grpc::ServerContext* context, const ::assignment2::ClientRequest* request, ::assignment2::ServerReply* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedLogin(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::assignment2::ClientRequest,::assignment2::ServerReply>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Connect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Connect() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::StreamedUnaryHandler< ::assignment2::ClientRequest, ::assignment2::ServerReply>(std::bind(&WithStreamedUnaryMethod_Connect<BaseClass>::StreamedConnect, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Connect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Connect(::grpc::ServerContext* context, const ::assignment2::ClientRequest* request, ::assignment2::ServerReply* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedConnect(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::assignment2::ClientRequest,::assignment2::ServerReply>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_List : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_List() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::StreamedUnaryHandler< ::assignment2::ClientRequest, ::assignment2::ShowList>(std::bind(&WithStreamedUnaryMethod_List<BaseClass>::StreamedList, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_List() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status List(::grpc::ServerContext* context, const ::assignment2::ClientRequest* request, ::assignment2::ShowList* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedList(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::assignment2::ClientRequest,::assignment2::ShowList>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Join : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Join() {
      ::grpc::Service::MarkMethodStreamed(3,
        new ::grpc::StreamedUnaryHandler< ::assignment2::ClientRequest, ::assignment2::ServerReply>(std::bind(&WithStreamedUnaryMethod_Join<BaseClass>::StreamedJoin, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Join() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Join(::grpc::ServerContext* context, const ::assignment2::ClientRequest* request, ::assignment2::ServerReply* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedJoin(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::assignment2::ClientRequest,::assignment2::ServerReply>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Leave : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Leave() {
      ::grpc::Service::MarkMethodStreamed(4,
        new ::grpc::StreamedUnaryHandler< ::assignment2::ClientRequest, ::assignment2::ServerReply>(std::bind(&WithStreamedUnaryMethod_Leave<BaseClass>::StreamedLeave, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Leave() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Leave(::grpc::ServerContext* context, const ::assignment2::ClientRequest* request, ::assignment2::ServerReply* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedLeave(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::assignment2::ClientRequest,::assignment2::ServerReply>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Login<WithStreamedUnaryMethod_Connect<WithStreamedUnaryMethod_List<WithStreamedUnaryMethod_Join<WithStreamedUnaryMethod_Leave<Service > > > > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Login<WithStreamedUnaryMethod_Connect<WithStreamedUnaryMethod_List<WithStreamedUnaryMethod_Join<WithStreamedUnaryMethod_Leave<Service > > > > > StreamedService;
};

class RegisterServer final {
 public:
  static constexpr char const* service_full_name() {
    return "assignment2.RegisterServer";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status ServerRegister(::grpc::ClientContext* context, const ::assignment2::ServerReply& request, ::assignment2::ServerReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::assignment2::ServerReply>> AsyncServerRegister(::grpc::ClientContext* context, const ::assignment2::ServerReply& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::assignment2::ServerReply>>(AsyncServerRegisterRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::assignment2::ServerReply>* AsyncServerRegisterRaw(::grpc::ClientContext* context, const ::assignment2::ServerReply& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status ServerRegister(::grpc::ClientContext* context, const ::assignment2::ServerReply& request, ::assignment2::ServerReply* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::assignment2::ServerReply>> AsyncServerRegister(::grpc::ClientContext* context, const ::assignment2::ServerReply& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::assignment2::ServerReply>>(AsyncServerRegisterRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::assignment2::ServerReply>* AsyncServerRegisterRaw(::grpc::ClientContext* context, const ::assignment2::ServerReply& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::RpcMethod rpcmethod_ServerRegister_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status ServerRegister(::grpc::ServerContext* context, const ::assignment2::ServerReply* request, ::assignment2::ServerReply* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_ServerRegister : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_ServerRegister() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_ServerRegister() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ServerRegister(::grpc::ServerContext* context, const ::assignment2::ServerReply* request, ::assignment2::ServerReply* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestServerRegister(::grpc::ServerContext* context, ::assignment2::ServerReply* request, ::grpc::ServerAsyncResponseWriter< ::assignment2::ServerReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_ServerRegister<Service > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_ServerRegister : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_ServerRegister() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_ServerRegister() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ServerRegister(::grpc::ServerContext* context, const ::assignment2::ServerReply* request, ::assignment2::ServerReply* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_ServerRegister : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_ServerRegister() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::StreamedUnaryHandler< ::assignment2::ServerReply, ::assignment2::ServerReply>(std::bind(&WithStreamedUnaryMethod_ServerRegister<BaseClass>::StreamedServerRegister, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_ServerRegister() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status ServerRegister(::grpc::ServerContext* context, const ::assignment2::ServerReply* request, ::assignment2::ServerReply* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedServerRegister(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::assignment2::ServerReply,::assignment2::ServerReply>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_ServerRegister<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_ServerRegister<Service > StreamedService;
};

}  // namespace assignment2


#endif  // GRPC_fb_2eproto__INCLUDED