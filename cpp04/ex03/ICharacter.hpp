/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htharrau <htharrau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 17:59:45 by htharrau          #+#    #+#             */
/*   Updated: 2025/05/19 12:36:59 by htharrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// Le Character a un inventaire de 4 items, soit 4 Materias maximum. À la cons-
// truction, l’inventaire est vide. Les Materias sont équipées au premier empla-
// cement vide trouvé, soit dans l’ordre suivant : de l’emplacement 0 au 3. Dans
// le cas où on essaie d’ajouter une Materia à un inventaire plein, ou d’utili-
// ser/retirer une Materia qui n’existe pas, ne faites rien.
// 
// La fonction membre unequip() ne doit PAS delete la Materia !
// La fonction membre use(int, ICharacter&) utilisera la Materia de l’emplace-
// ment[idx], et passera la cible en paramètre à la fonction AMateria::use.

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};