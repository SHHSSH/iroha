/**
 * Copyright Soramitsu Co., Ltd. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef IROHA_SHARED_MODEL_PLAIN_SIGNATURE_HPP
#define IROHA_SHARED_MODEL_PLAIN_SIGNATURE_HPP

#include "interfaces/common_objects/signature.hpp"

namespace shared_model {

  namespace plain {

    class Signature final : public interface::Signature {
     public:
      Signature(std::string signed_data_hex, std::string public_key_hex);

      const std::string &publicKey() const override;

      const std::string &signedData() const override;

     protected:
      interface::Signature *clone() const override;

     private:
      const std::string signed_data_hex_;
      const std::string public_key_hex_;
    };

  }  // namespace plain
}  // namespace shared_model

#endif  // IROHA_SHARED_MODEL_PLAIN_SIGNATURE_HPP
